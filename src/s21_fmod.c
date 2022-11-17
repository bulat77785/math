#include "s21_math.h"

long double s21_fmod(double x, double y) {
    y = s21_fabs(y);
    long double res = s21_fabs(x);
    if (x != x || y == 0 || y != y)
        return s21_NAN;
    if (x == s21_INFINITY || x == -s21_INFINITY) {
        res = x;
    } else {
        for (int i = 0; res >= y; i++)
            res = res - y;
        res = x < 0. ? res * -1. : res;
    }
    return res;
}

