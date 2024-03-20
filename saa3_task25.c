// Съставете алгоритъм и напишете програма за изчисляване на xn (n - цяло число) чрез рекурсивна функция, съгласно следните формули:
// xn = x*xn-1, n>0
// xn = 1, n=0
// xn = 1/x-n, n<0

#include <stdio.h>

float x;
int n;

//x^n
float stepen(float x, int n) {
  
    if (n == 0)
        return 1;
    else
    {
        if (n > 0)
            return (x * stepen(x, n - 1));
        else
            return (1 / stepen(x, -n));
    }
  
}

int main() {
  
    printf("x = ");
    scanf("%f", &x);
    printf("n = ");
    scanf("%d", &n);

    printf("%f^%d = %f\n", x, n, stepen(x, n));

    return 0;
  
}
