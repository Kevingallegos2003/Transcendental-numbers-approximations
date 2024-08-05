#include "mathlib.h"

#include <stdio.h>
#include <unistd.h>
int newton_count;
double sqrt_newton(double x) {
    double n;
    double i;
    double itrk = 0;
    n = x;
    while (itrk < 10) {
        i = (n + (x / n));
        i = (i / 2);
        n = i;
        ++itrk;
        ++newton_count;
    }
    return i;
}
int sqrt_newton_iters() {
    return newton_count;
}
