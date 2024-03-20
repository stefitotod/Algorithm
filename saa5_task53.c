#include <stdio.h>

int main() {

    int i, a, c, n, m, y0, y;

    printf("Enter the number of generated random numbers: ");
    scanf("%d", &n);

    printf("Enter the upper bound of the interval (m): ");
    scanf("%d", &m);

    printf("Enter the value for 'a': ");
    scanf("%d", &a);
    printf("Enter the value for 'c': ");
    scanf("%d", &c);
    printf("Enter the initial value 'y0': ");
    scanf("%d", &y0);

    for (i = 0; i < n; i++) {
  
        y = (a * y0 + c) % m;

        printf("%d-th random number: %d\n", i, y);

        y0 = y;
    }

    return 0;

}
