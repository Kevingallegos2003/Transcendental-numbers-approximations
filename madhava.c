#include "mathlib.h"

#include <stdio.h>
#include <unistd.h>
int madhava_count;
double pi_madhava(void) {
    double pi = 0.0;
    double z = 0.0;
    double x = -3.0;
    double i = 0.0;
    double l = 0.0;
    double itrk = 0.0;
    while (itrk < 29) {
        z = itrk;
        i = x;
        if (z == 0.0) {
            i = 1.0;
        } else if (z == 1.0) {
            i = -3;
        } else {
            --z;
            while (z > 0.0) {
                i = i * x;
                --z;
            }
        }
        i = 1 / i; // 1/3^k
        l = (2 * (itrk) + 1);
        pi = pi + (i / l);
        itrk++;
        madhava_count++;
    }
    pi = (pi * sqrt_newton(12.0));
    return pi;
}
int pi_madhava_terms(void) {
    return madhava_count;
}
