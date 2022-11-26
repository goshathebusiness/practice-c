#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "../lib/lib.h"

int main() {
    float x = 0, z;
    long y = 1;

    for (int k = 1; k <= 29; k++) {
        x += function4(k);
    }

    for (int k = 1; k <= 29; k++) {
        y *= function5(k);
    }

    z = log10(fabs(x + (4 * y)));

    printf("x = %f\ny = %li\nz = %f", x, y, z);

    return 0;
}