#include <stdio.h>
#include <math.h>

#include "../lib/lib.h"

int main() {
    int a[2] = {0, 0},
        b[2] = {24, 23},
        c[2] = {-24, 25};

    float halfPerimeter = (distance(a, b) + distance(b, c) + distance(c, a)) / 2;
    float height = sqrt(halfPerimeter * (halfPerimeter - distance(c, a)) * (halfPerimeter - distance(a, b)) * (halfPerimeter - distance(b, c))) / distance(b, c);
    float bissetrisse = sqrt(distance(c, a) * distance(a, b) * halfPerimeter * (halfPerimeter - distance(b, c))) / (distance(c, a) + distance(a, b));

    printf("Виcота трикутника %f\n", height);
    printf("Бісектриса трикутника %f\n", bissetrisse);

    return 0;
}