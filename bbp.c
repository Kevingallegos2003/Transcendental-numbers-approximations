#include "mathlib.h"

#include <stdio.h>
#include <unistd.h>
int bbp_count;
double pi_bbp(void) {
    double pi = 0.0;
    double z = 0.0;
    double x = 16.0;
    double i = 0.0;
    double itrk = 0.0;
    while (absolute(itrk) < 60) {
        z = itrk;
        i = x;
        if (z == 0.0) {
            i = 1.0;
        } else if (z == 1.0) {
            i = 16.0;
        } else {
            --z;
            while (z > 0.0) {
                i = i * x;
                --z;
            }
        }
        pi = (pi)
             + (1 / i)
                   * ((4.0 / ((8.0 * itrk) + 1.0)) - (2.0 / ((8.0 * itrk) + 4.0))
                       - (1.0 / ((8.0 * itrk) + 5.0)) - (1.0 / ((8.0 * itrk) + 6.0)));
        ++itrk;
        ++bbp_count;
    }
    return pi;
}
int pi_bbp_terms(void) {
    return bbp_count;
}
