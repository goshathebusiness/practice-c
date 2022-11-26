#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "../lib/lib.h"

int main() {
    int i = 24, k = 0;
    float h = 0.1 * i, sum;

    printf("╔════════════╦════════════╗\n");

    for (float arg = 0; arg < i; arg += h) {

        printf("║ %10f ║ %10f ║\n", arg, function7(arg));

        if (function7(arg) > 1.3 && function7(arg) < 5) {
            k++;
            sum += function7(arg);
        }
    }

    printf("╠════════════╩════════════╣\n");
    printf("║ Кількість %13i ║\n", k);
    printf("║ Сума %18f ║\n", sum);
    printf("╚═════════════════════════╝\n");

    return 0;
}