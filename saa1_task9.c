// Съставете алгоритъм и напишете програма за изчисляване на първото xn > 100 за рекурентната редица xn+1 = 2xn + 10, n = 0,1,…, x0 = 2

#include <stdio.h>

int main() {
    
    int x;
    x = 2;
    
    do {
        x = 2 * x + 10;
    } while (x <= 100);

    printf("x = %d\n", x);

    return 0;
    
}
