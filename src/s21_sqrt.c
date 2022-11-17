#include "s21_math.h"

long double s21_sqrt(double x) {
    double mid;
    if (x < 0 || x != x) {
        mid = s21_NAN;
    } else {
    double left = 0, right = s21_fmax(1, x);
    mid = (left + right) / 2;
        for (int i = 1; ((mid - left) > s21_EPS) && (i < 10000); i++) {
            if (mid * mid > x)
                right = mid;
            else
                left = mid;
            mid = (left + right) / 2;
        }
    }
    return mid;
}

double s21_fmax(double x, double y) {
    double res;
    if (x >= y)
        res = x;
    else
        res = y;
    return res;
}
