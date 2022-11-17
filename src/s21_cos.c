#include "s21_math.h"
#include <math.h>  // TO DELETE WHEN OUR FUNCTION WILL BE READY

long double s21_cos(double x) {
    long double result;
    if (x == s21_INFINITY || x == -s21_INFINITY || x != x) {
        result = s21_NAN;
    } else {
        x = norm_rad(x);
        result = 1;
        if (x == s21_PI/2 || x == -s21_PI/2) {
            result = 0;
        } else {
            long double temp = 1;
            for (int i = 1; fabsl(temp) > s21_EPS; i++) {
                temp = temp * (-1) * pow(x, 2) / ((2 * i - 1) * 2 * i);
                result = result + temp;
            }
        }
    }
    return result;
}

