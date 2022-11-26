#include <stdio.h>

int main() {
    int tableRows;
    float value, valueChange, inches, div, lines;

    printf("Введіть кількість рядків таблиці, початкове значення та шаг змінення\n");
    scanf("%i %f %f", &tableRows, &value, &valueChange);

    printf("╔══════════════════════════╦════════════════════════╦══════════════════════════╗\n");
    for (int i = 0; i < tableRows; i++, value += valueChange) {
        inches = value, div = value * 2.54, lines = value * 12;

        printf("║%20f дюйм ║%19f див ║%19f ліній ║\n", inches, div, lines);
    }
    printf("╚══════════════════════════╩════════════════════════╩══════════════════════════╝\n");

    return 0;
}