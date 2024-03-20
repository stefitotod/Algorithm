// Програма за изчисляване на факториел - n! = 1.2.3 ... n, за n цяло число и n >= 0

#include <stdio.h>

int main() {
    
    int n, i;
    float fact;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    fact = 1;

    for (i = 1; i <= n; i++)
        fact = fact * i;

    printf("%d! = %.0f\n", n, fact);

    return 0;

}
