// Програма за въвеждане и извеждане на елемeнтите на двумерен масив.

#include <stdio.h>

#define N 2
#define M 2

int main() {

    int i, j, arr[N][M];

    printf("Enter the elements of the two-dimensional array\n");
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }

    printf("The elements of the two-dimensional array\n");
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);

    return 0;

}
