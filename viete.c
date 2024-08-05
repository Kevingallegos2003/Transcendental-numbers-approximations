#include "mathlib.h"

#include <stdio.h>
#include <unistd.h>
int it_count;
double pi_viete(void) {
    double i = 2;
    double k = 1;
    double d = 1;
    double pi = 1;
    double itrk = 1;
    double t;
    t = (sqrt_newton(i)); // divide t/2 for .7071
    while (itrk < 25) {
        if (itrk == 1) {
            t = t * 1;
        } else {
            //while(k < itrk+1){
            t = t + i;
            t = sqrt_newton(t);
            ++k;
            //}
            k = 1;
        }
        d = t / 2;
        pi = (pi * d);
        ++itrk;
        ++it_count;
    }
    pi = 2 / pi;
    return pi;
}
int pi_viete_factors(void) {
    return it_count;
}
