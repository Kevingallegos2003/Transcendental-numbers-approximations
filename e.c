#include "mathlib.h"

#include <stdio.h>
#include <unistd.h>
int e_count;
double e(void) {
    double i = 1;
    double e = 2;
    double x = 0;
    double k;
    double itrk = 2;
    while (itrk < 18) {
        i = 1;
        k = 0;
        x = itrk;
        while (k != x) {
            i = i * x;
            --x;
        }
        e = (e + (1 / i));
        ++itrk;
        ++e_count;
    }
    return e;
}
int e_terms(void) {
    return e_count;
}
