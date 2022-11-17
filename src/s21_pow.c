#include "s21_math.h"

long double s21_pow(double base, double exp) {
    long double result;
    if ((base < 0 && base != -s21_INFINITY) && s21_fmod(exp, 1) != 0) {
        if (exp == s21_INFINITY) {
            result = s21_INFINITY;
        } else if (exp == -s21_INFINITY) {
            result = 0;
       } else {
        result = s21_NAN;
        }
    } else if (base == 0 && exp > 0) {
        result = 0;
    } else if ((base == 0 || base == s21_INFINITY || base == -s21_INFINITY || base != base) && exp == 0) {
        result = 1;
    } else if (base == s21_INFINITY || base == -s21_INFINITY) {
        result = s21_INFINITY;
    } else if (exp == s21_INFINITY) {
        result = s21_INFINITY;
    } else if (exp == -s21_INFINITY) {
        result = 0;
    } else if (exp < 1 && exp > 0 && base > 1 && exp != s21_INFINITY && exp != -s21_INFINITY) {
        result = pow_to_one(base, exp);
    } else if (exp >= 1 && exp != s21_INFINITY && exp != -s21_INFINITY) {
        if (base < 0) {
            base = -base;
            result = pow_for(base, exp);
            if (s21_fmod(exp, 2) != 0) {
            result = -result;
            }
        } else {
            double exp_int = s21_floor(exp);
            double exp_div = exp - exp_int;
            long double part1 = pow_to_one(base, exp_div);
            long double part2 = pow_for(base, exp_int);
            result = part2 * part1;
        }
        if (result > s21_DBL_MAX) {
            result = s21_INFINITY;
        }
    } else {
        if (base < 0) {
            base = - base;
            result = s21_exp(exp * s21_log(base));
            if (s21_fmod(exp, 2) != 0) {
            result = -result;
            }
        } else {
            result = s21_exp(exp * s21_log(base));
        }
    }
    return result;
}

long double pow_to_one(double base, double exp) {
    long double result = 1;
    if (exp == 0) {
        result = 1;
    } else {
        long double temp = 1;
        for (int i = 1; temp > s21_EPS; i++) {
            temp = temp * exp * s21_log(base) / i;
            result = result + temp;
        }
    }
    return result;
}

long double pow_for(double base, double exp) {
    long double result = base;
    for (int i = 1; i < exp; i++) {
        result = result * base;
    }
    return result;
}


