#include <stdio.h>

int main() {
    int num;
    printf("Введіть номер квартири (8 квартир у будинку)\n");
    scanf("%i", &num);
    switch (num) {
        case 1:
            printf("У квартирі %i 3 жильця\n", num);
            break;
        case 2:
            printf("У квартирі %i 4 жильця\n", num);
            break;
        case 3:
            printf("У квартирі %i 2 жильця\n", num);
            break;
        case 4:
            printf("У квартирі %i 3 жильця\n", num);
            break;
        case 5:
            printf("У квартирі %i 3 жильця\n", num);
            break;
        case 6:
            printf("У квартирі %i 1 жилець\n", num);
            break;
        case 7:
            printf("У квартирі %i 5 жильців\n", num);
            break;
        case 8:
            printf("У квартирі %i 3 жильця\n", num);
            break;
        default:
            printf("Такої квартири немає\n");
            break;
    }

    return 0;
}