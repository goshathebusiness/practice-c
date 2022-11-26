#include <stdio.h>

int main() {
    int num;
    printf("Введіть номер квартири (8 квартир у будинку)\n");
    scanf("%i", &num);
    if (num == 1) {
        printf("У квартирі %i 3 жильця\n", num);
    }
    else if (num == 2) {
        printf("У квартирі %i 4 жильця\n", num);
    }
    else if (num == 3) {
        printf("У квартирі %i 2 жильця\n", num);
    }
    else if (num == 4) {
        printf("У квартирі %i 3 жильця\n", num);
    }
    else if (num == 5) {
        printf("У квартирі %i 3 жильця\n", num);
    }
    else if (num == 6) {
        printf("У квартирі %i 1 жилець\n", num);
    }
    else if (num == 7) {
        printf("У квартирі %i 5 жильців\n", num);
    }
    else if (num == 8) {
        printf("У квартирі %i 3 жильця\n", num);
    }
    else {
        printf("Такої квартири немає\n");
    }

    return 0;
}