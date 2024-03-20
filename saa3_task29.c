// Програма, извеждаща цифрите на дадено естествено число в обратен ред чрез рекурсивна функция.

#include <stdio.h>

void reverse(int n) {

    if (n < 10) {
        printf("%d", n);
    }
    else {
        printf("%d", n % 10);
        reverse(n / 10);
    }

}

int main() {

    int n;

    printf("n: ");
    scanf("%d", &n);

    reverse(n);
    printf("\n");

    return 0;

}
