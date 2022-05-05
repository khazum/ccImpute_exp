// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// getConsMtx
Eigen::MatrixXd getConsMtx(const Eigen::Map<Eigen::MatrixXi> dat);
RcppExport SEXP _ccImpute_getConsMtx(SEXP datSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXi> >::type dat(datSEXP);
    rcpp_result_gen = Rcpp::wrap(getConsMtx(dat));
    return rcpp_result_gen;
END_RCPP
}
// solveDrops
Eigen::MatrixXd solveDrops(const Eigen::Map<Eigen::MatrixXd> cm, Eigen::Map<Eigen::MatrixXd> em, const Eigen::Map<Eigen::MatrixXi> ids, const int n_cores);
RcppExport SEXP _ccImpute_solveDrops(SEXP cmSEXP, SEXP emSEXP, SEXP idsSEXP, SEXP n_coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type cm(cmSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type em(emSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXi> >::type ids(idsSEXP);
    Rcpp::traits::input_parameter< const int >::type n_cores(n_coresSEXP);
    rcpp_result_gen = Rcpp::wrap(solveDrops(cm, em, ids, n_cores));
    return rcpp_result_gen;
END_RCPP
}
// wCorDist
arma::mat wCorDist(arma::mat x, const arma::vec& w, const bool useRanks, const unsigned int n_cores);
RcppExport SEXP _ccImpute_wCorDist(SEXP xSEXP, SEXP wSEXP, SEXP useRanksSEXP, SEXP n_coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const bool >::type useRanks(useRanksSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type n_cores(n_coresSEXP);
    rcpp_result_gen = Rcpp::wrap(wCorDist(x, w, useRanks, n_cores));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ccImpute_getConsMtx", (DL_FUNC) &_ccImpute_getConsMtx, 1},
    {"_ccImpute_solveDrops", (DL_FUNC) &_ccImpute_solveDrops, 4},
    {"_ccImpute_wCorDist", (DL_FUNC) &_ccImpute_wCorDist, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_ccImpute(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
