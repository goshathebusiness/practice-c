#include <stdio.h>
#include <math.h>

#include "../lib/lib.h"

int main() {
    float a = 1, summa = 0;
    int k;
    for (k = 1; a > 0.001; k++) {
        a = function6(k) / k;
        summa += a;
    }
    printf("%f  %f  %i", summa, a, k);

    return 0;
}