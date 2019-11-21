// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// hyper_bench_vector
NumericVector hyper_bench_vector(NumericVector& xin, NumericVector& yin, double N, double n);
RcppExport SEXP _RichR_hyper_bench_vector(SEXP xinSEXP, SEXP yinSEXP, SEXP NSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type xin(xinSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type yin(yinSEXP);
    Rcpp::traits::input_parameter< double >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(hyper_bench_vector(xin, yin, N, n));
    return rcpp_result_gen;
END_RCPP
}
// name_table
NumericVector name_table(List& lh);
RcppExport SEXP _RichR_name_table(SEXP lhSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type lh(lhSEXP);
    rcpp_result_gen = Rcpp::wrap(name_table(lh));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _RichR_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// fast_factor
SEXP fast_factor(SEXP x);
RcppExport SEXP _RichR_fast_factor(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_factor(x));
    return rcpp_result_gen;
END_RCPP
}
// sf
List sf(DataFrame& x);
RcppExport SEXP _RichR_sf(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(sf(x));
    return rcpp_result_gen;
END_RCPP
}
// uniq
StringVector uniq(StringVector& xa);
RcppExport SEXP _RichR_uniq(SEXP xaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector& >::type xa(xaSEXP);
    rcpp_result_gen = Rcpp::wrap(uniq(xa));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RichR_hyper_bench_vector", (DL_FUNC) &_RichR_hyper_bench_vector, 4},
    {"_RichR_name_table", (DL_FUNC) &_RichR_name_table, 1},
    {"_RichR_rcpp_hello_world", (DL_FUNC) &_RichR_rcpp_hello_world, 0},
    {"_RichR_fast_factor", (DL_FUNC) &_RichR_fast_factor, 1},
    {"_RichR_sf", (DL_FUNC) &_RichR_sf, 1},
    {"_RichR_uniq", (DL_FUNC) &_RichR_uniq, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_RichR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
