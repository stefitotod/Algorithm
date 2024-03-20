// Програма за изчисляване на факториел чрез рекурсивна функция.

#include <stdio.h>

int fact(int n) {

    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);

}

int main() {
    int n;

    printf("n = ");
    scanf("%d", &n);

    printf("n! = %d\n", fact(n));

    return 0;

}
