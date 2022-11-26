#include "lib.h"

#include <stdlib.h>
#include <math.h>

float distance(int a[2], int b[2]) {
    float distance = sqrt(pow((b[0] - a[0]), 2) + pow((b[1] - a[1]), 2));
    return distance;
}

float factorial(float x) {
    int f = 1;
    for (int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}