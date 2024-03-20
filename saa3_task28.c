// Съставете алгоритъм и напишете програма, която проверява за наличие на дадена цифра в дадено естествено число чрез рекурсивна функция.

#include <stdio.h>

int test(int num, int dig) {

    if (num < 1) {
        return -1;
    }
    if (num % 10 == dig) {
        return dig;
    }
    return test(num / 10, dig);

}

int main() {
    int number, digit;

    printf("Enter number to test: ");
    scanf("%d", &number);
    printf("Enter digit to test: ");
    scanf("%d", &digit);

    if (test(number, digit) >= 0)
        printf("DA %d\n", digit);
    else
        printf("NE\n");

    return 0;

}
