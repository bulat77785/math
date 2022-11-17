#include "s21_math.h"

long double s21_acos(double x) {
    long double result;
    result = s21_PI / 2 - s21_asin(x);
    return result;
}
