// Съставете алгоритъм и напишете програма за преброяване на всички двойки от съседни елементи, в които двата елемента имат различни знаци

#include <stdio.h>

#define N 5

int main() {
  
    int a[N], i, k = 0;

    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < N - 1; i++)
        if ((a[i] < 0 && a[i + 1] > 0) || (a[i] > 0 && a[i + 1] < 0))   
            k++;
    
    printf("Result: %d\n", k);

    return 0;
  
}
