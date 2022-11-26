#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "../lib/lib.h"

int main() {
    float y, min[2] = {0, 0};
    for (int k = 1991; k <= 2001; k++) {
        y = 100 * function8(k);
        printf("%f\n", y);

        if (((y > -315)||(y < 958)) && (y < min[1]) && (y < 0)) {
            min[0] = k;
            min[1] = y;
        }
    }
    if (min[1] < 0) {
        printf("Фірма мала найбільші збитки у %i році, вони становили %f\n", (int)min[0], min[1]);
    }
    else {
        printf("Фірма не мала збитків");
    }

    return 0;
}