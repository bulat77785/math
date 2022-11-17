#include "s21_math.h"

long double s21_floor(double num) {
    if (num == s21_INFINITY || num == -s21_INFINITY)
        return (num);
    long int tmp = num * 1000000;
    if ((tmp % 1000000 == 0 && (num < 0)) || (num == 0))
        return ((long long int)num);
    if (num != num)
        return s21_NAN;
    else
        return (num > 0 ? (long long int)num : ((long long int)num) - 1);
}

