// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// numUnpack
IntegerMatrix numUnpack(IntegerVector pack);
RcppExport SEXP _GGIR_numUnpack(SEXP packSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type pack(packSEXP);
    rcpp_result_gen = Rcpp::wrap(numUnpack(pack));
    return rcpp_result_gen;
END_RCPP
}
// parseGT3Xggir
NumericMatrix parseGT3Xggir(const char* filename, const int max_samples, const double scale_factor, const int sample_rate, const uint32_t start_time, const uint32_t batch_begin, const uint32_t batch_end, const bool verbose, const bool debug, const bool impute_zeroes);
RcppExport SEXP _GGIR_parseGT3Xggir(SEXP filenameSEXP, SEXP max_samplesSEXP, SEXP scale_factorSEXP, SEXP sample_rateSEXP, SEXP start_timeSEXP, SEXP batch_beginSEXP, SEXP batch_endSEXP, SEXP verboseSEXP, SEXP debugSEXP, SEXP impute_zeroesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< const int >::type max_samples(max_samplesSEXP);
    Rcpp::traits::input_parameter< const double >::type scale_factor(scale_factorSEXP);
    Rcpp::traits::input_parameter< const int >::type sample_rate(sample_rateSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type start_time(start_timeSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type batch_begin(batch_beginSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type batch_end(batch_endSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const bool >::type debug(debugSEXP);
    Rcpp::traits::input_parameter< const bool >::type impute_zeroes(impute_zeroesSEXP);
    rcpp_result_gen = Rcpp::wrap(parseGT3Xggir(filename, max_samples, scale_factor, sample_rate, start_time, batch_begin, batch_end, verbose, debug, impute_zeroes));
    return rcpp_result_gen;
END_RCPP
}
// resample
NumericMatrix resample(NumericMatrix raw, NumericVector rawTime, NumericVector time, int stop, int type);
RcppExport SEXP _GGIR_resample(SEXP rawSEXP, SEXP rawTimeSEXP, SEXP timeSEXP, SEXP stopSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type raw(rawSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rawTime(rawTimeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< int >::type stop(stopSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(resample(raw, rawTime, time, stop, type));
    return rcpp_result_gen;
END_RCPP
}
