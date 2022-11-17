#include "s21_math.h"

long double s21_log(double x) {
    long double ln = 0.0;
    if (x < 0 || x == -s21_INFINITY || x != x) {
        ln = s21_NAN;
    } else if (x < 2 && x !=0 && x != 1 && x > 0) {
        x--;
        long double temp = x;
        ln = x;
        for (int i = 2; s21_fabs(temp) > s21_EPS && i < 100000; i++) {
            temp = temp * (-x) * (i - 1) / i;
            ln += temp;
        }
    } else if (x == 2) {
        ln = 0.6931471805599452862267640;
    } else if (x == 0) {
        ln = -s21_INFINITY;
    } else if (x == 1) {
        ln = 0;
    } else if (x == s21_INFINITY) {
        ln = s21_INFINITY;
    } else {
        int n = 0;
        while (x > 2) {
            x /= 2;
            n++;
        }
            ln = s21_log(x) + n * s21_log(2);
    }
  return ln;
}
