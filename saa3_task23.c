// Програма за изчисляване на факториел чрез итерация.

#include <stdio.h>

int fact(int n) {
  
    if (n == 0)
        return 1;

    int i, f = 1;

    for (i = 1; i <= n; i++)
        f = f * i;

    return f;
  
}

int main() {
  
    int n;

    printf("n = ");
    scanf("%d", &n);

    printf("n! = %d\n", fact(n));

    return 0;
  
}
