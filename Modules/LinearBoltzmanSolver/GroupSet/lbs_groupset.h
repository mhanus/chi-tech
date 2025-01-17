#ifndef _lbs_groupset_h
#define _lbs_groupset_h

#include "lbs_group.h"
#include "../IterativeMethods/lbs_iterativemethods.h"

#include <ChiMath/Quadratures/LegendrePoly/legendrepoly.h>
#include <ChiMath/Quadratures/product_quadrature.h>
#include <ChiMesh/SweepUtilities/chi_angleaggregation.h>

#include <ChiPhysics/chi_physics_namespace.h>

typedef chi_mesh::SweepManagement::AngleAggregation AngleAgg;

#define NPT_ANGAGG_SINGLE 1
#define NPT_ANGAGG_POLAR 2

typedef std::pair<int,int> GsSubSet;
typedef std::pair<int,int> AngSubSet;

#include <vector>

//################################################################### Class def
/**Group set functioning as a collection of groups*/
class LBSGroupset
{
public:
  std::vector<LBSGroup*>                      groups;
  chi_math::ProductQuadrature*                      quadrature;
  int                                          iterative_method;
  int                                          angleagg_method;
  std::vector<std::vector<double>>             d2m_op;
  std::vector<std::vector<double>>             m2d_op;
  chi_mesh::SweepManagement::AngleAggregation* angle_agg;
  int                                          master_num_grp_subsets;
  int                                          master_num_ang_subsets;
  std::vector<GsSubSet>                        grp_subsets;
  std::vector<int>                             grp_subset_sizes;
  std::vector<AngSubSet>                       ang_subsets_top;
  std::vector<int>                             ang_subset_sizes_top;
  std::vector<AngSubSet>                       ang_subsets_bot;
  std::vector<int>                             ang_subset_sizes_bot;

  double                                       residual_tolerance;
  int                                          max_iterations;
  int                                          gmres_restart_intvl;
  bool                                         apply_wgdsa;
  bool                                         apply_tgdsa;
  int                                          wgdsa_max_iters;
  int                                          tgdsa_max_iters;
  double                                       wgdsa_tol;
  double                                       tgdsa_tol;
  bool                                         wgdsa_verbose;
  bool                                         tgdsa_verbose;
  std::string                                  wgdsa_string;
  std::string                                  tgdsa_string;


  chi_physics::Solver*                         wgdsa_solver;
  chi_physics::Solver*                         tgdsa_solver;
  std::vector<int>                             wgdsa_cell_dof_array_address;


  LBSGroupset()
  {
    quadrature = nullptr;
    iterative_method = NPT_GMRES;
    angleagg_method  = NPT_ANGAGG_POLAR;
    angle_agg = new AngleAgg;
    master_num_grp_subsets = 1;
    master_num_ang_subsets = 1;
    residual_tolerance = 1.0e-6;
    max_iterations = 1000;
    gmres_restart_intvl = 30;
    apply_wgdsa = false;
    apply_tgdsa = false;

    wgdsa_solver = nullptr;
    tgdsa_solver = nullptr;

    wgdsa_max_iters = 30;
    tgdsa_max_iters = 30;

    wgdsa_tol = 1.0e-4;
    tgdsa_tol = 1.0e-4;

    wgdsa_verbose = false;
    tgdsa_verbose = false;
  }

  //npt_groupset.cc
  void BuildDiscMomOperator(int scatt_order);
  void BuildMomDiscOperator(int scatt_order);
  void BuildSubsets();


};

#endif