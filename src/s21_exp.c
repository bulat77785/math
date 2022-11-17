#include "s21_math.h"

long double s21_exp(double x) {
    long double res = 1;
    long double temp = 1;
    long double i = 1;
    int flag = 0;
    if (x < 0) {
        x *= -1;
        flag = 1;
    }
    while (s21_fabs(res) > s21_EPS) {
        res *= x / i;
        i += 1;
        temp += res;
        if (temp > s21_DBL_MAX) {
            temp = s21_INFINITY;
            break;
        }
    }
    if (flag == 1) {
        if (temp > s21_DBL_MAX) {
            temp = 0;
        } else {
            temp = 1. / temp;
        }
    }
    if (temp > s21_DBL_MAX) {
        return s21_INFINITY;
    }
    return temp;
}

