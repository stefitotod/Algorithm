// Съставете алгоритъм и напишете програма за намиране на сумата на елементите по вторичния диагонал на двумерен масив.

#include <stdio.h>

#define N 3
#define M 3

int main() {
  
    int i, j, arr[N][M], s = 0;

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            if (j == M - i - 1)
                s = s + arr[i][j];

    printf("s = %d\n", s);

    return 0;
  
}
