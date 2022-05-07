// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  if (n == 0) {
    return 1;
    }
    else {
    double ans = value;
    for (uint64_t j = 1; j < n; j++)
        ans *= value;
    return ans;
    }
}

uint64_t fact(uint16_t n) {
  if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }
    uint64_t ans = 1;
    for (uint64_t j = 2; j <= n; j++) {
        ans *= j;
    }
    return ans;
}

double calcItem(double x, uint16_t n) {
  double calc = 0;
    calc = pown(x, n) / fact(n);
    return calc;
}

double expn(double x, uint16_t count) {
  double exp = 0;
    for (uint64_t j = 0; j <= count; j++)
        exp += calcItem(x, i);
    return exp;
}

double sinn(double x, uint16_t count) {
  double sn = 0;
    for (uint64_t j = 1; j <= count; j++)
        sn += pown(-1, j - 1) * calcItem(x, 2 * j - 1);
    return sn;
}

double cosn(double x, uint16_t count) {
  double cs = 0;
    for (uint64_t j = 1; j <= count; j++)
        cs += pown(-1, j - 1) * calcItem(x, 2 * j - 2);
    return cs;
}
