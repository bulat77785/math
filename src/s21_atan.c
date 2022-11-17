#include "s21_math.h"
#include <math.h>  //  NEED TO BE DELETED

long double s21_atan(double x) {
    long double result = x;
    if (x < 1.0 && x > -1.0) {
        result = atan_up_to_one(x);
    } else if (x == 1) {
        result = s21_PI / 4;
    } else if (x == -1) {
        result = - s21_PI / 4;
    } else if (x > 1) {
        result = s21_PI/2 - atan_up_to_one(1/x);
    } else if (x < - 1) {
        result = - s21_PI/2 - atan_up_to_one(1/x);
    }
    return result;
}

long double atan_up_to_one(double x) {
    long double result = x;
    long double temp = x;
    for (int i = 1; fabsl(temp) > s21_EPS && i < 100000; i++) {
        temp = pow(-1, i) * pow(x, 2*i + 1) / (2*i + 1);
        result = result + temp;
        }
    return result;
}
