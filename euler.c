#include "mathlib.h"

#include <stdio.h>
#include <unistd.h>
int euler_count;
double pi_euler(void) {
    double pi = 0.0;
    double x = 0.0;
    double i = 0.0;
    double itrk = 1.0;
    while (itrk < 10000001) {
        x = itrk;
        i = x;
        i = i * i;
        pi = (pi + (1 / i));
        ++itrk;
        ++euler_count;
    }
    pi = pi * 6;
    pi = sqrt_newton(pi);
    return pi;
}
int pi_euler_terms(void) {
    return euler_count;
}
