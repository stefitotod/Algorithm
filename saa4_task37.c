#include <stdio.h>
#define N 100
unsigned long mas[N];

unsigned long fib(int n) {

    if (n < 2)
        mas[n] = n;
    else if (0 == mas[n])
        mas[n] = fib(n - 1) + fib(n - 2);

    return mas[n];

}

int main() {

    int n;
    printf("Fn: ");
    scanf("%d", &n);
    printf("nF: %lu\n", fib(n));
    
   return 0;
}
