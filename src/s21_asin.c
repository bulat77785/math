#include "s21_math.h"
#include <math.h>  // NEED TO BE DELETED

long double s21_asin(double x) {
    long double result = x;
    if (x < 1.0 && x > -1.0) {
        result = s21_atan(x/sqrt(1-x*x));
    } else if (x == 1) {
        result = s21_PI / 2;
    } else if (x == -1) {
        result = - s21_PI / 2;
    } else if (x > 1 || x < -1) {
        result = s21_NAN;
    }
    return result;
}
