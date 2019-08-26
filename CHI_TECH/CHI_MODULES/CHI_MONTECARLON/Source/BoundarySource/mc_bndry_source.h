#ifndef _montecarlon_bndry_source_h
#define _montecarlon_bndry_source_h

#include "CHI_MODULES/CHI_MONTECARLON/Source/mc_base_source.h"

#include <CHI_MESH/chi_meshmatrix3x3.h>


//###################################################################
/**Boundary source class.*/
class chi_montecarlon::BoundarySource : public chi_montecarlon::Source
{
public:
  int ref_bndry;
private:
  struct FACE_REF
  {
    int cell_glob_index;
    int face_num;
    chi_mesh::Matrix3x3 RotMatrix;
    double area;

    FACE_REF(int cell_gi, int f_id)
    {
      cell_glob_index = cell_gi;
      face_num = f_id;
      area = 1.0;
    }
  };
  std::vector<FACE_REF*> ref_cell_faces;
  std::vector<double>    face_cdf;
public:
  BoundarySource();

  void Initialize(chi_mesh::MeshContinuum* ref_grid,
                  CHI_DISCRETIZATION_FV*   ref_fv_sdm);

  chi_montecarlon::Particle
  CreateParticle(chi_montecarlon::RandomNumberGenerator* rng);
};

#endif