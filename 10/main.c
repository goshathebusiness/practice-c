#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "../lib/lib.h"

int main() {
    float y[7], x[8][2];
    for (int k = 1; k <= 7; k++) {
        y[k] = function9(k);
        printf("%f\n", y[k]);
    }

    for (int i = 1; i <= sizeof(y) / sizeof(float); i++) {
        if (y[i] < 0) {
            x[i][0] = i;
            x[i][1] = y[i];
        }
    }

    printf("Сума номерів другого та третього негативного елементу: %i\n",(int) x[2][0] + (int) x[3][0]);
    printf("Їх номери: %i та %i", (int) x[2][0], (int) x[3][0]);

    return 0;
}