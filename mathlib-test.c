#include "mathlib.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define OPTIONS "aebnmrvwhnss:"
// Note: this assignment doesn’t use : in the third argument to getopt
int main(int argc, char **argv) {
    int a1 = 1;
    int e1 = 1;
    int b1 = 1;
    int n1 = 1;
    int m1 = 1;
    int r1 = 1;
    int v1 = 1;
    int w1 = 1;
    int h1 = 1;
    int s1 = 1;
    int shelp = 1;
    int data = 0;
    double it = 0.0;
    int opt = 0;
    while ((opt = getopt(argc, argv, OPTIONS)) != -1) {
        switch (opt) {
        case 'e':
            if (e1 == 0) {
                break;
            }
            printf("e() = %16.15lf, M_E = %16.15lf, diff = %16.15lf\n", e(), M_E, M_E - e());
            shelp = 0;
            if (data == 1) {
                printf("e() terms = %d\n", e_terms());
            }
            e1 = 0;
            break;
        case 'b':
            if (b1 == 0) {
                break;
            }
            printf("pi_bbp() = %16.15lf, M_PI = %16.15lf, diff = %16.15lf\n", pi_bbp(), M_PI,
                M_PI - pi_bbp());
            shelp = 0;
            if (data == 1) {
                printf("pi_bbp() terms = %d\n", pi_bbp_terms());
            }
            b1 = 0;
            break;
        case 'm':
            if (m1 == 0) {
                break;
            }
            printf("pi_madhava() = %16.15lf, M_PI = %16.15lf, diff = %16.15lf\n", pi_madhava(),
                M_PI, M_PI - pi_madhava());
            shelp = 0;
            if (data == 1) {
                printf("pi_madhava() terms = %d\n", pi_madhava_terms());
            }
            m1 = 0;
            break;
        case 'r':
            if (r1 == 0) {
                break;
            }
            printf("pi_euler() = %16.15lf, M_PI = %16.15lf, diff = %16.15lf\n", pi_euler(), M_PI,
                M_PI - pi_euler());
            shelp = 0;
            if (data == 1) {
                printf("pi_euler() terms = %d\n", pi_euler_terms());
            }
            r1 = 0;
            break;
        case 'v':
            if (v1 == 0) {
                break;
            }
            printf("pi_viete() = %16.15lf, M_PI = %16.15lf, diff = %16.15lf\n", pi_viete(), M_PI,
                M_PI - pi_viete());
            if (data == 1) {
                printf("pi_viete() terms = %d\n", pi_viete_factors());
            }
            shelp = 0;
            v1 = 0;
            break;
        case 'w':
            if (w1 == 0) {
                break;
            }
            printf("pi_wallis() = %16.15lf, M_PI = %16.15lf, diff = %16.15lf\n", pi_wallis(), M_PI,
                M_PI - pi_wallis());
            shelp = 0;
            if (data == 1) {
                printf("pi_wallis() terms = %d\n", pi_wallis_factors());
            }
            w1 = 0;
            break;
        case 'h':
            if (h1 == 0) {
                break;
            }
            printf("For e enter -e, for square root enter -n, for pi use -b,-m, -r, -v, -w, use -s "
                   "to enable terms printing, -a for all");
            h1 = 0;
            break;
        case 'n':
            if (n1 == 0) {
                break;
            }
            shelp = 0;
            while (it < 9.9) {
                printf("sqrt_newton(%.2lf) = %16.15lf, sqrt(%.2lf) = %16.15lf, diff = %16.15lf\n",
                    it, sqrt_newton(it), it, sqrt(it), sqrt(it) - sqrt_newton(it));
                if (data == 1) {
                    printf("sqrt_newton() terms = %d\n", sqrt_newton_iters());
                }
                it = it + 0.1;
            }
            n1 = 0;
            break;
        case 's':
            if (s1 == 0) {
                break;
            }
            data = 1;
            ++shelp;
            s1 = 0;
            break;
        case 'a':
            if (a1 == 0) {
                break;
            }
            printf("e() = %16.15lf, M_E = %16.15lf, diff = %16.15lf\n", e(), M_E, M_E - e());
            if (data == 1) {
                printf("e() terms = %d\n", e_terms());
            }
            printf("pi_bbp() = %16.15lf, M_PI = %16.15lf, diff = %16.15lf\n", pi_bbp(), M_PI,
                M_PI - pi_bbp());
            if (data == 1) {
                printf("pi_bbp() terms = %d\n", pi_bbp_terms());
            }
            printf("pi_madhava() = %16.15lf, M_PI = %16.15lf, diff = %16.15lf\n", pi_madhava(),
                M_PI, M_PI - pi_madhava());
            if (data == 1) {
                printf("pi_madhava() terms = %d\n", pi_madhava_terms());
            }
            printf("pi_euler() = %16.15lf, M_PI = %16.15lf, diff = %16.15lf\n", pi_euler(), M_PI,
                M_PI - pi_euler());
            if (data == 1) {
                printf("pi_euler() terms = %d\n", pi_euler_terms());
            }
            printf("pi_viete() = %16.15lf, M_PI = %16.15lf, diff = %16.15lf\n", pi_viete(), M_PI,
                M_PI - pi_viete());
            if (data == 1) {
                printf("pi_viete() terms = %d\n", pi_viete_factors());
            }
            printf("pi_wallis() = %16.15lf, M_PI = %16.15lf, diff = %16.15lf\n", pi_wallis(), M_PI,
                M_PI - pi_wallis());
            if (data == 1) {
                printf("pi_wallis() terms = %d\n", pi_wallis_factors());
            }
            while (it < 9.9) {
                printf("sqrt_newton(%.2lf) = %16.15lf, sqrt(%.2lf) = %16.15lf, diff = %16.15lf\n",
                    it, sqrt_newton(it), it, sqrt(it), sqrt(it) - sqrt_newton(it));
                if (data == 1) {
                    printf("sqrt_newton() terms = %d\n", sqrt_newton_iters());
                }
                it = it + 0.1;
            }
            a1 = 0;
            break;
        case '?':
            printf("For e enter -e, for square root enter -n, for pi use -b,-m, -r, -v, -w, use -s "
                   "to enable terms printing, -a for all");
            break;
        }
    }
    return 0;
}
