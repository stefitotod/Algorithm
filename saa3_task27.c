// Съставете алгоритъм и напишете програма за изчисляване на сумата на елементите на даден едномерен масив чрез рекурсивна функция.

#include <stdio.h>

#define N 5
int mas[N];

int have_sum(int n) {

    if (n > 0)
        return have_sum(n - 1) + mas[n];
    else
        return mas[0];

}

int main() {

    int i;

    for (i = 0; i < N; i++) {
        printf("mas[%d] = ", i);
        scanf("%d", &mas[i]);
    }

    printf("Suma = %d\n", have_sum(N));

    return 0;

}
