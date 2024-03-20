// Въведете елементите на двумерен масив. Да се създаде едномерен масив с елементи елементите на двумерния масив намиращи се в интервала [x, y].

#include <stdio.h>
#include <stdlib.h>

#define N 2
#define M 3

int main() {
    int i, j, arr1[N][M], x = 0, y = 0, k = 0, q = 0;

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++) {
            printf("arr1[%d][%d] = ", i, j);
            scanf("%d", &arr1[i][j]);
        }

    printf("Enter x and y\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            if (arr1[i][j] >= x && arr1[i][j] <= y)
                k++;

    int* p = (int*)malloc(k * sizeof(int));

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            if (arr1[i][j] >= x && arr1[i][j] <= y) {
                *(p + q) = arr1[i][j];     //p[q] = arr1[i][j]
                q++;
            }

    for (i = 0; i < k; i++)
        printf("arr2[%d] = %d\n", i, *(p + i));

    free(p);

    return 0;
}
