#include "mathlib.h"

#include <stdio.h>
#include <unistd.h>
int wallis_count;
double pi_wallis(void) {
    double pi = 1.0;
    double x = 0.0;
    double i = 0.0;
    double l = 0.0;
    double itrk = 1.0;
    while (itrk < 4974441) {
        x = itrk;
        i = x;
        i = i * i;
        i = (i * 4);
        l = x;
        l = l * l;
        l = ((l * 4) - 1);
        pi = (pi * (i / l));
        ++itrk;
        ++wallis_count;
    }
    pi = pi * 2;
    return pi;
}
int pi_wallis_factors(void) {
    return wallis_count;
}
