// Програма, проверяваща за наличие на елемент с дадена стойност, в даден едномерен масив чрез рекурсивна функция.

#include <stdio.h>

#define N 5
int a[N];

int search(int x, int n) {
  
    if (n < 1)
        return a[0] == x;

    return x == a[n - 1] || search(x, n - 1);
  
}

int main() {
  
    int i, n;

    for (i = 0; i < N; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("n: ");
    scanf("%d", &n);

    printf("n = %d", n);
    if (search(n, i))
        printf(" e ");
    else
        printf(" ne e ");
    printf("element ot masiva\n");

    return 0;
  
}
