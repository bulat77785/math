#include "s21_math.h"

#include <check.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


START_TEST(abs_fn) {
  int value1 = -4;
  ck_assert_int_eq(s21_abs(value1), abs(value1));
  int value2 = -123;
  ck_assert_int_eq(s21_abs(value2), abs(value2));
  for (int i = -1234567; i < 123456; i += 10) {
    ck_assert_int_eq(s21_abs(i), abs(i));
  }
}
END_TEST


START_TEST(sin_fn) {
    double x;
    x = 1.5;
    ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), 0.0000001);
    x = -2.5;
    ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), 0.0000001);
    x = 0;
    ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), 0.0000001);
    x = 150;
    ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), 0.0000001);
    x = -50;
    ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), 0.0000001);
    x = s21_INFINITY;
    ck_assert_double_nan(s21_sin(x));
    x = -s21_INFINITY;
    ck_assert_double_nan(s21_sin(x));
    x = s21_NAN;
    ck_assert_double_nan(s21_sin(x));
    x = -s21_NAN;
    ck_assert_double_nan(s21_sin(x));
}
END_TEST

START_TEST(cos_fn) {
    double x;
    x = 1.5;
    ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), 0.0000001);
    x = -2.5;
    ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), 0.0000001);
    x = 0;
    ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), 0.0000001);
    x = 150;
    ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), 0.0000001);
    x = -50;
    ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), 0.0000001);
    x = s21_INFINITY;
    ck_assert_double_nan(s21_cos(x));
    x = -s21_INFINITY;
    ck_assert_double_nan(s21_cos(x));
    x = s21_NAN;
    ck_assert_double_nan(s21_cos(x));
    x = -s21_NAN;
    ck_assert_double_nan(s21_cos(x));
    x = s21_PI/2;
    ck_assert_int_eq(s21_cos(x), 0);
    x = -s21_PI/2;
    ck_assert_int_eq(s21_cos(x), 0);
}
END_TEST

START_TEST(tan_fn) {
    double x;
    x = 1.5;
    ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), 0.0000001);
    x = -2.5;
    ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), 0.0000001);
    x = 0;
    ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), 0.0000001);
    x = 150;
    ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), 0.0000001);
    x = -50;
    ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), 0.0000001);
    x = s21_INFINITY;
    ck_assert_double_nan(s21_tan(x));
    x = -s21_INFINITY;
    ck_assert_double_nan(s21_tan(x));
    x = s21_NAN;
    ck_assert_double_nan(s21_tan(x));
    x = -s21_NAN;
    ck_assert_double_nan(s21_tan(x));
}
END_TEST

START_TEST(asin_fn) {
    double x;
    x = 1;
    ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), 0.0000001);
    x = -1;
    ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), 0.0000001);
    x = 0;
    ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), 0.0000001);
    x = 50;
    ck_assert_double_nan(s21_asin(x));
    x = -50;
    ck_assert_double_nan(s21_asin(x));
    x = -0.8;
    ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), 0.0000001);
    x = 0.6;
    ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), 0.0000001);
    x = s21_INFINITY;
    ck_assert_double_nan(s21_asin(x));
    x = -s21_INFINITY;
    ck_assert_double_nan(s21_asin(x));
    x = s21_NAN;
    ck_assert_double_nan(s21_asin(x));
    x = -s21_NAN;
    ck_assert_double_nan(s21_asin(x));
}
END_TEST

START_TEST(acos_fn) {
    double x;
    x = 1;
    ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), 0.0000001);
    x = -1;
    ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), 0.0000001);
    x = 0;
    ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), 0.0000001);
    x = 50;
    ck_assert_double_nan(s21_acos(x));
    x = -50;
    ck_assert_double_nan(s21_acos(x));
    x = -0.8;
    ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), 0.0000001);
    x = 0.6;
    ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), 0.0000001);
    x = s21_INFINITY;
    ck_assert_double_nan(s21_acos(x));
    x = -s21_INFINITY;
    ck_assert_double_nan(s21_acos(x));
    x = s21_NAN;
    ck_assert_double_nan(s21_acos(x));
    x = -s21_NAN;
    ck_assert_double_nan(s21_acos(x));
}
END_TEST

START_TEST(atan_fn) {
    double x;
    x = 1;
    ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
    x = -1;
    ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
    x = 0;
    ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
    x = 50;
    ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
    x = -50;
    ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
    x = -0.8;
    ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
    x = 0.6;
    ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
    x = s21_INFINITY;
    ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
    x = -s21_INFINITY;
    ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
    x = s21_NAN;
    ck_assert_double_nan(s21_atan(x));
    x = -s21_NAN;
    ck_assert_double_nan(s21_atan(x));
}
END_TEST

START_TEST(ceil_fn) {
    double x;
    x = 1.2345;
    ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
    x = -8.156984;
    ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
    x = 0;
    ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
    x = 1.0000;
    ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
    x = LONG_MIN;
    ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
    x = LONG_MAX;
    ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
    x = s21_INFINITY;
    ck_assert_ldouble_infinite(s21_ceil(x));
    x = -s21_INFINITY;
    ck_assert_ldouble_infinite(s21_ceil(x));
    x = s21_NAN;
    int a;
    int b;
    a = isnan(s21_ceil(x));
    b = isnan(ceil(x));
    ck_assert_int_eq(a, b);
    x = -s21_NAN;
    a = isnan(s21_ceil(x));
    b = isnan(ceil(x));
    ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(exp_fn) {
    double x = 0;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 0.0000001);
    x = 1;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 0.0000001);
    x = 2;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 0.0000001);
    x = 3;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 0.0000001);
    x = 1.5;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 0.0000001);
    x = -32;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 0.0000001);
    x = -1;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 0.0000001);
    x = 0.5;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 0.0000001);
    x = -0.5;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 0.0000001);
    x = 715;
    ck_assert_ldouble_infinite(s21_exp(x));
    x = -715;
    ck_assert_ldouble_eq(s21_exp(x), 0);
    x = -0;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 0.0000001);
    x = s21_INFINITY;
    ck_assert_ldouble_infinite(s21_exp(x));
    x = -s21_INFINITY;
    ck_assert_ldouble_eq(s21_exp(x), 0);
    x = s21_NAN;
    ck_assert_ldouble_nan(s21_exp(x));
}
END_TEST

START_TEST(fabs_fn) {
    double zero = 0;
    ck_assert_ldouble_eq(s21_fabs(-15896547832.251478956),
                        fabs(-15896547832.251478956));
    ck_assert_ldouble_eq(s21_fabs(1.0), fabs(1.0));
    ck_assert_ldouble_eq(s21_fabs(15896547832.251478956),
                        fabs(15896547832.251478956));
    ck_assert_ldouble_eq(s21_fabs(0.1), fabs(0.1));
    ck_assert_ldouble_eq(s21_fabs(0.741852963321654987),
                        fabs(0.741852963321654987));
    ck_assert_ldouble_eq(s21_fabs(-99999.9999999), fabs(-99999.9999999));
    ck_assert_ldouble_eq(s21_fabs(zero), fabs(zero));
}
END_TEST

START_TEST(floor_fn) {
    double test1 = -1.5;
    double test2 = -5.351;
    double test3 = 0.5;
    double test4 = 0;
    double test5 = s21_NAN;
    double test6 = s21_INFINITY;
    double test14 = -s21_INFINITY;
    double test7 = -99999999999;
    double test8 = DBL_DIG;
    double test9 = 9999999999999.1;
    double test10 = 354.656;
    double test11 = -35.456;
    double test12 = 1;
    double test13 = DBL_DECIMAL_DIG;
    int nantest1 = isnan(floor(test5));
    int nantest2 = isnan(s21_floor(test5));
    ck_assert_int_eq(nantest1, nantest2);
    ck_assert_ldouble_eq_tol(s21_floor(test1), floor(test1), 0.0000001);
    ck_assert_ldouble_eq_tol(s21_floor(test2), floor(test2), 0.0000001);
    ck_assert_ldouble_eq_tol(s21_floor(test3), floor(test3), 0.0000001);
    ck_assert_ldouble_eq_tol(s21_floor(test4), floor(test4), 0.0000001);
    ck_assert_int_eq(s21_floor(test5), floor(test5));
    ck_assert_ldouble_infinite(s21_floor(test6));
    ck_assert_ldouble_eq_tol(s21_floor(test7), floor(test7), 0.0000001);
    ck_assert_ldouble_eq_tol(s21_floor(test8), floor(test8), 0.0000001);
    ck_assert_ldouble_eq_tol(s21_floor(test9), floor(test9), 0.0000001);
    ck_assert_ldouble_eq_tol(s21_floor(test10), floor(test10), 0.0000001);
    ck_assert_ldouble_eq_tol(s21_floor(test11), floor(test11), 0.0000001);
    ck_assert_ldouble_eq_tol(s21_floor(test12), floor(test12), 0.0000001);
    ck_assert_ldouble_eq_tol(s21_floor(test13), floor(test13), 0.0000001);
    ck_assert_ldouble_infinite(s21_floor(test14));
}
END_TEST

START_TEST(fmod_fn) {
    double test1 = 223;
    double test12 = 2;
    double test2 = 2.1;
    double test21 = -2.1345;
    ck_assert_ldouble_eq_tol(s21_fmod(test1, test12), fmod(test1, test12), 0.0000001);
    ck_assert_ldouble_eq_tol(s21_fmod(test2, test21), fmod(test2, test21), 0.0000001);
    double x = s21_INFINITY;
    ck_assert_double_infinite(s21_fmod(x, test1));
    x = -s21_INFINITY;
    ck_assert_double_infinite(s21_fmod(x, test1));
    x = s21_NAN;
    ck_assert_double_nan(s21_fmod(x, test1));
}
END_TEST

START_TEST(sqrt_fn) {
    ck_assert_ldouble_eq_tol(s21_sqrt(2.2), sqrt(2.2), 0.0000001);
    ck_assert_ldouble_eq_tol(s21_sqrt(1225.36987), sqrt(1225.36987), 0.0000001);
    ck_assert_ldouble_eq_tol(s21_sqrt(0.259814), sqrt(0.259814), 0.0000001);
    ck_assert_double_eq_tol(s21_sqrt(0), sqrt(0), 0.0000001);
    ck_assert_double_nan(s21_sqrt(-2));
    double x = s21_NAN;
    ck_assert_double_nan(s21_sqrt(x));
}
END_TEST

START_TEST(pow_fn) {
    double base = 5;
    double exp = 2;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 0.0000001);
    base = -5;
    exp = 2;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 0.0000001);
    base = -5;
    exp = 2.1;
    ck_assert_double_nan(s21_pow(base, exp));
    base = 0;
    exp = 2;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 0.0000001);
    base = 5;
    exp = 0.5;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 0.0000001);
    base = -5;
    exp = 5;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 0.0000001);
    base = 3;
    exp = 700;
    ck_assert_double_infinite(s21_pow(base, exp));
    base = 25;
    exp = 5.1;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 0.0000001);
    base = 9;
    exp = -85;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 0.0000001);
    base = 0;
    exp = 0;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 0.0000001);
    base = 0.2;
    exp = 0.2;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 0.0000001);
    base = s21_INFINITY;
    exp = 0;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 0.0000001);
    base = -s21_INFINITY;
    exp = 0;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 0.0000001);
    base = s21_NAN;
    exp = 0;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 0.0000001);
    base = -s21_NAN;
    exp = 0;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 0.0000001);
    base = -5;
    exp = -s21_INFINITY;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 0.0000001);
    base = 10;
    exp = s21_INFINITY;
    ck_assert_double_infinite(s21_pow(base, exp));
    base = -0.2;
    exp = -5;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 0.0000001);
    base = -0.2;
    exp = -6;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 0.0000001);
    base = 5;
    exp = s21_NAN;
    ck_assert_double_nan(s21_pow(base, exp));
    base = 5;
    exp = -s21_NAN;
    ck_assert_double_nan(s21_pow(base, exp));
}
END_TEST

START_TEST(log_fn) {
    double x = -5;
    ck_assert_double_nan(s21_log(x));
    x = -s21_INFINITY;
    ck_assert_double_nan(s21_log(x));
    x = 0;
    ck_assert_double_infinite(s21_log(x));
    x = 1;
    ck_assert_ldouble_eq_tol(s21_log(x), log(x), 0.0000001);
    x = s21_INFINITY;
    ck_assert_double_infinite(s21_log(x));
    x = 2;
    ck_assert_ldouble_eq_tol(s21_log(x), log(x), 0.0000001);
    x = 0.8;
    ck_assert_ldouble_eq_tol(s21_log(x), log(x), 0.0000001);
    x = 1.5;
    ck_assert_ldouble_eq_tol(s21_log(x), log(x), 0.0000001);
    x = 8;
    ck_assert_ldouble_eq_tol(s21_log(x), log(x), 0.0000001);
    x = 150;
    ck_assert_ldouble_eq_tol(s21_log(x), log(x), 0.0000001);
}
END_TEST



int main(void) {
    Suite *s1 = suite_create("Core");
    TCase *tc1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1);
    tcase_add_test(tc1, abs_fn);
    tcase_add_test(tc1, ceil_fn);
    tcase_add_test(tc1, sin_fn);
    tcase_add_test(tc1, cos_fn);
    tcase_add_test(tc1, tan_fn);
    tcase_add_test(tc1, atan_fn);
    tcase_add_test(tc1, asin_fn);
    tcase_add_test(tc1, acos_fn);
    tcase_add_test(tc1, exp_fn);
    tcase_add_test(tc1, fabs_fn);
    tcase_add_test(tc1, floor_fn);
    tcase_add_test(tc1, fmod_fn);
    tcase_add_test(tc1, sqrt_fn);
    tcase_add_test(tc1, pow_fn);
    tcase_add_test(tc1, log_fn);

    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}

