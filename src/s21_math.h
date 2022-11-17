#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <stdio.h>
#include <limits.h>

#define s21_EPS 1e-25
#define s21_PI 3.141592653589793238462643383279502884197169399375105820974944
#define s21_NAN 0.0 / 0.0
#define s21_INFINITY 1.0 / 0.0
#define s21_e 2.7182818284590452353602874713527
#define s21_DBL_MAX 1.79769313486231470e+308

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

long double atan_up_to_one(double x);
double norm_rad (double x);
long double pow_to_one(double base, double exp);
long double pow_for(double base, double exp);
double s21_fmax(double x, double y);

#endif  // SRC_S21_MATH_H_
