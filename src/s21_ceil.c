#include "s21_math.h"

long double s21_ceil(double x) {
    double res;
    if (x == s21_INFINITY || x == -s21_INFINITY) {
        res = x;
    } else {
        long long int i;
        i = (long long int)x;
        if (x == LONG_MAX) {
            res = LONG_MAX;
        } else if (i < x) {
            res = i + 1;
        } else {
            res = i;
        }
    }
    return x != x? s21_NAN : res;
}
