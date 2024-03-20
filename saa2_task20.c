// Даден е двумерен масив. Чрез въвеждане на уникален индекс да се изведе съответният елемент на масива.

#include <stdio.h>

#define N 2
#define M 2

int main() {
  
    int i, j, arr[N][M], *p, n;

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }

    p = &arr[0][0];

    printf("n: ");
    scanf("%d", &n);
    printf("arr[%d] = %d\n", n, *(p + n - 1));     //p[n - 1]

    return 0;
  
}
