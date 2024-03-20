// Програма, проверяваща дали дадена редица е монотонно намаляваща, т.е. дали всеки елемент на редицата е по-голям или равен на следващият чрез рекурсивна функция.

#include <stdio.h>

#define N 5
int a[N];

int monoton(int n) {
    int b;

    if (n == 1)
        return 1;

    if (a[n - 2] >= a[n - 1])
        b = 1;
    else
        b = 0;

    return b && monoton(n - 1);

}


int main() {
    int i;

    for (i = 0; i < N; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Redicata ");
    if (monoton(i))
        printf("e ");
    else
        printf("ne e ");
    printf("monotonno namalyavashta. \n");

    return 0;

}
