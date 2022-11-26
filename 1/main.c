#include <stdio.h>
#include <math.h>

int main() {
    float h = 20, r = 8, pi = 3.1415, l, s, v;
    l = sqrt(pow(h, 2) + pow(r, 2));
    s = pi * r * l;
    v = (pi * pow(r, 2) * h) / 3;

    printf("Площа бічної поверхні %f\n", s);
    printf("Обсяг %f\n", v);

    return 0;
}