// Съставете алгоритъм и напишете програма за преобразуване на цяло десетично положително число в двоично чрез рекурсивна функция.

#include <stdio.h>

// decimal to binary
void dec_byn(int a) {

    if (a > 0) {
        dec_byn(a / 2);
        printf("%d", (a % 2));
    }

}

int main() {

    int n;
    
    printf("n(10): ");
    scanf("%d", &n);

    printf("n(2): ");
    dec_byn(n);
    printf("\n");

    return 0;

}
