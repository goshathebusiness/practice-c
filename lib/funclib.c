#include "lib.h"

#include <stdlib.h>
#include <math.h>

float function1(float x) {
    float f = (9.2 * cos(pow(x, 2)) - fabs(sin(x) / 1.1));
    return f;
}

float function2(float x) {
    float f = (12.4 * sin(fabs(x / 2.1))) - (8.3 * cos(1.2 * x));
    return f;
}

float function3(float x) {
    float f = fabs(cos(x) / 2.7) + (9.1 * sin(1.2 * x + 1));
    return f;
}

float function4(float x) {
    float f = fabs(sin(x) / 3.12 + cos(pow(x, 2))) - (8.3 * sin(3 * x));
    return f;
}

float function5(float x) {
    float f = cos(fabs(2 * x)) / 1.12 - cos((3 * x) - 2) + 6.15;
    return f;
}

float function6(float x) {
    float f = sin(x) * cos(pow(x, 2)) * sin(x + 1.4) + 5.14;
    return f;
}

float function7(float x) {
    float f = fabs(sin(2 * x - 1.5) + (3 * sin(pow(x, 2)))) + 2.38;
    return f;
}

float function8(float x) {
    float f = cos(pow(x, 2)) * sin(2 * x - 1) + 4.29;
    return f;
}

float function9(float x) {
    float f = cos(pow(x, 2) + 1) - fabs(sin(2 * x) - 5.76);
    return f;
}