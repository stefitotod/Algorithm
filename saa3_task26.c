// Програма за изчисляване на най-големия общ делител на две естествени числа чрез рекурсивна функция.

#include <stdio.h>
#include <stdlib.h>

int min(int p, int q) {

    if (p > q)
        return q;
    else
        return p;

}

int nod(int c, int d) {

    if (c == d)
        return c;
    else
        return nod(abs(c - d), min(c, d));

}

int main() {

    int a, b;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    printf("NOD = %d\n", nod(a, b));

    return 0;

}
