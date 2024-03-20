// Съставете алгоритъм и напиште програма за намиране на сумата на елементите по периметъра на двумерен масив.

#include <stdio.h>

#define N 2
#define M 3

int main() {

    int i, j, arr[N][M], p = 0;

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            if (i == 0 || j == 0 || i == N - 1 || j == M - 1)
                p = p + arr[i][j];
    
    printf("p = %d\n", p);

    return 0;

}
