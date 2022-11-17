#include "s21_math.h"

long double s21_sin(double x) {
    long double result;
    if (x == s21_INFINITY || x == -s21_INFINITY || x != x) {
        result = s21_NAN;
    } else {
        x = norm_rad(x);
        result = x;
        long double temp = x;
        for (int i = 1; s21_fabs(temp) > s21_EPS; i++) {
            temp = temp * (-1)*s21_pow(x, 2) / (2 * i * (2 * i + 1));
            result = result + temp;
        }
    }
    return result;
}

double norm_rad(double x) {
    while (x > s21_PI) {
        x = x - 2 * s21_PI;
    }
    while (x < -s21_PI) {
        x = x + 2 * s21_PI;
    }
    return x;
}
