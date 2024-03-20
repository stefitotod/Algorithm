// Въведете елементите на двумерен масив. Създайте едномерен масив с елементи, елементите на двумерния масив, както следва: 
// сумата на елементите по главния диагонал, сумите на елементите по редове и броя на елементите под главния диагонал, по-малки от сумите на индексите им.

#include <stdio.h>

#define N 2
#define M 2
#define P (N + 2)

int main() {
  
    int i, j, arr1[N][M], arr2[P];

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++) {
            printf("arr1[%d][%d] = ", i, j);
            scanf("%d", &arr1[i][j]);
        }

    for (i = 0; i < P; i++)
        arr2[i] = 0;

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            if (i == j)
                arr2[0] = arr2[0] + arr1[i][j];

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            arr2[i + 1] = arr2[i + 1] + arr1[i][j];

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            if ((i > j) && (arr1[i][j] < i + j))
                arr2[P - 1] = arr2[P - 1] + 1;

    for (i = 0; i < P; i++)
        printf("arr2[%d] = %d\n", i, arr2[i]);

    return 0;
  
}
