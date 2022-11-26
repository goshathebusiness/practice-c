#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "../lib/lib.h"

int main() {
    char choice;
    float y, taxes, i = 24;
    printf("Введіть тип виконаної роботи (A, B, C)\n");
    scanf("%c", &choice);
    if (choice == 'A') {
        y = 100 * fabs(function1(i) + 50);
        taxes = y * 0.1;
    }
    else if (choice == 'B') {
        y = 150 * fabs(function2(i) + 100);
        taxes = y * 0.15;
    }
    else if (choice == 'C') {
        y = 200 * fabs(function3(i) + 135);
        taxes = y * 0.2;
    }
    printf("Зарахавано: %f\n", y);
    printf("Податки: %f\n", taxes);
    printf("До видачі: %f\n", y - taxes);

    return 0;
}