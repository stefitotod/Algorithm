#include <stdio.h>

const int br = 6;
int moneti[br] = {1, 2, 5, 10, 20, 50};

void greedy_recursia(int suma, int n) {
    int b;
    if (suma > 0) {
        b = suma / moneti[n];
        printf("%d*%d = %d\n", b, moneti[n], b * moneti[n]);
        greedy_recursia(suma % moneti[n], n - 1);
    }
}

int main() {
    int sum;
    printf("Enter the number: ");
    scanf("%d", &sum);
    greedy_recursia(sum, br - 1);
    return 0;
}
