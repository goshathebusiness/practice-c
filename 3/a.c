#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "../lib/lib.h"

int main() {
    float x, a, b, c, d, e = 2.71828, i = 24, y;

    printf("Введите x, a, b, c, d в такой последовательности\n");
    scanf("%f", &x, &a, &b, &c, &d);

    if (abs(x) < 10) {
        float fi = tan(x + a) - log(abs(b + 7))/log(i);
        y = function1(fi);
    }
    else if (abs(x) >= 10) {
        float omega = c * pow((pow(x, 2) + (d * pow(e, 1.3))), 1 / 5);
        y = function2(omega);
    }

    printf("y = %f", y);

    return 0;
}