#include "pwl_polygon.h"

PolygonFEView::PolygonFEView(chi_mesh::CellPolygon* poly_cell,
                             chi_mesh::MeshContinuum* vol_continuum,
                             SpatialDiscretization_PWL *discretization) :
                             CellFEView(poly_cell->v_indices.size())
{
  precomputed = false;
  grid = vol_continuum;
  num_of_subtris = poly_cell->edges.size();
  beta = 1.0/num_of_subtris;

  //=========================================== Create the single quad point
  vol_quadrature = discretization->tri_quad_deg5;
  surf_quadrature= discretization->tri_quad_deg3_surf;


  //=========================================== Get raw vertices
  vc = poly_cell->centroid;
//
//  printf("Cell vertices:\n");

  //=========================================== Calculate legs and determinants
  for (int side=0;side<num_of_subtris;side++)
  {
    int* side_indices = poly_cell->edges[side];

    chi_mesh::Vertex v0 = *vol_continuum->nodes[side_indices[0]];
    chi_mesh::Vertex v1 = *vol_continuum->nodes[side_indices[1]];
    chi_mesh::Vertex v2 = vc;
//
//    std::cout<< v0.PrintS() << "\n";

    chi_mesh::Vector sidev01 = v1-v0;
    chi_mesh::Vector sidev02 = v2-v0;

//    v01.push_back(sidev01);
//    v02.push_back(sidev02);

    double sidedetJ = ((sidev01.x)*(sidev02.y) - (sidev02.x)*(sidev01.y));
    detJ.push_back(sidedetJ);

    FEside_data2d* triangle_data = new FEside_data2d;
    triangle_data->detJ = sidedetJ;
    triangle_data->detJ_surf = sidev01.Norm();
    triangle_data->v_index = new int[2];

    triangle_data->v_index[0] = side_indices[0];
    triangle_data->v_index[1] = side_indices[1];

    //Set Jacobian
    triangle_data->J.SetIJ(0,0,sidev01.x);
    triangle_data->J.SetIJ(1,0,sidev01.y);
    triangle_data->J.SetIJ(0,1,sidev02.x);
    triangle_data->J.SetIJ(1,1,sidev02.y);
    triangle_data->J.SetIJ(2,2,0.0);

    //Set Jacobian inverse
    triangle_data->Jinv.SetIJ(0,0,sidev02.y/sidedetJ);
    triangle_data->Jinv.SetIJ(1,0,-sidev01.y/sidedetJ);
    triangle_data->Jinv.SetIJ(0,1,-sidev02.x/sidedetJ);
    triangle_data->Jinv.SetIJ(1,1,sidev01.x/sidedetJ);
    triangle_data->Jinv.SetIJ(2,2,0.0);

    //Set Jacobian-Transpose inverse
    triangle_data->JTinv.SetIJ(0,0, sidev02.y/sidedetJ);
    triangle_data->JTinv.SetIJ(1,0,-sidev02.x/sidedetJ);
    triangle_data->JTinv.SetIJ(0,1,-sidev01.y/sidedetJ);
    triangle_data->JTinv.SetIJ(1,1, sidev01.x/sidedetJ);
    triangle_data->JTinv.SetIJ(2,2,0.0);



    sides.push_back(triangle_data);
  }

  //=========================================== Compute node to side mapping
  for (int v=0; v<poly_cell->v_indices.size(); v++)
  {
    int vindex = poly_cell->v_indices[v];
    int* side_mapping = new int[num_of_subtris];
    for (int side=0;side<num_of_subtris;side++)
    {
      side_mapping[side] = -1;

      int* side_indices = poly_cell->edges[side];
      if (side_indices[0] == vindex)
      {
        side_mapping[side] = 0;
      }
      if (side_indices[1] == vindex)
      {
        side_mapping[side] = 1;
      }
    }
    node_to_side_map.push_back(side_mapping);
  }

  //============================================= Compute edge dof mappings
  edge_dof_mappings.resize(poly_cell->edges.size());
  for (int e=0; e<poly_cell->edges.size(); e++)
  {
    edge_dof_mappings[e].resize(2);
    for (int fv=0; fv<2; fv++)
    {
      for (int v=0; v<poly_cell->v_indices.size(); v++)
      {
        if (poly_cell->edges[e][fv] == poly_cell->v_indices[v])
        {
          edge_dof_mappings[e][fv] = v;
          break;
        }
      }
    }
  }
}