#include <stdio.h>

#define N 3
#define M 2

int main() {
  
    unsigned int i, j, a[N][M], b[10] = {0};

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            b[a[i][j]]++;

    printf("The matrix elements:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    printf("Digit counts:\n");
    for (i = 0; i < 10; i++)
        printf("Digit %d: %d\n", i, b[i]);

    return 0;
  
}
