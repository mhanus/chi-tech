#ifndef _fv_polygon_h
#define _fv_polygon_h

#include "fv_cellbase.h"
#include <ChiMesh/Cell/cell_polygon.h>
#include <ChiMesh/MeshContinuum/chi_meshcontinuum.h>

//################################################################### Class def
/**Finite Volume implementation for a polygon.
 *
 * - face_area[f] gives the area of the face.
 * - side_s_v[f][v] gives the vector for each leg of the
 *   triangle forming a side (face).*/
class PolygonFVView : public CellFVView
{
private:
  chi_mesh::MeshContinuum* grid;

public:
  double                                     volume; ///< Actually area times unity h
  std::vector<double>                        face_area; ///< Actually length unity h
  std::vector<std::vector<chi_mesh::Vector>> side_s_v;

  PolygonFVView(chi_mesh::CellPolygon* poly_cell,
                chi_mesh::MeshContinuum *vol_continuum) :
                CellFVView(poly_cell->v_indices.size())
  {
    grid = vol_continuum;

    volume = 0.0;

    int num_faces = poly_cell->edges.size();
    side_s_v.resize(num_faces);
    for (int f=0; f<num_faces; f++)
    {
      int v0i = poly_cell->edges[f][0];
      int v1i = poly_cell->edges[f][1];

      chi_mesh::Vector v0 = *grid->nodes[v0i];
      chi_mesh::Vector v1 = *grid->nodes[v1i];
      chi_mesh::Vector v2 = poly_cell->centroid;

      face_area.push_back((v1-v0).Norm());

      chi_mesh::Vector sidev01 = v1-v0;
      chi_mesh::Vector sidev02 = v2-v0;

      side_s_v[f].push_back(sidev01);
      side_s_v[f].push_back(sidev02);

      double sidedetJ = ((sidev01.x)*(sidev02.y) - (sidev02.x)*(sidev01.y));

      volume += sidedetJ/2.0;
    }

  }
};

#endif