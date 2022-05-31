#include <stdio.h>
#include "s21_math.h"

long double s21_exp(double x) {
    if (x != x) {
        return x;
    }
    if (x == s21_INFINITY || x > MAX_DEGREE) {
        return s21_INFINITY;
    }
    else if (x == -s21_INFINITY || x <= MIN_DEGREE) {
        return 0;
    }

    double val = 1.0;
    double temp = 1.0;

    for (int i = 1; temp >= s21_EPS; ++i) {
        temp *= s21_fabs(x) / i;
        val += temp;
    }
    return (x > 0) ? val : 1.0 / val;
}
