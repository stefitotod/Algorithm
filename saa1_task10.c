// Програма за намиране на максималния елемент на едномерен масив, средната стойност на сумата на елементите,
// броя на нечетните и дали числото n се съдържа в отрицателните елементи на масива

#include <stdio.h>

#define N 5

int main() {

    int i, arr[N], max, k = 0, n, p = 0;
    float sum = 0;

    printf("Enter a value for n: ");
    scanf("%d", &n); 
    
    for (i = 0; i < N; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 0; i < N; i++) {
        sum = sum + arr[i];

        if (arr[i] > max)
            max = arr[i];

        if (arr[i] % 2 != 0 && arr[i] != 0)
            k++;

        if (arr[i] < 0)
            if (n == arr[i])
                p = 1;
    }

    printf("max = %d\n", max);
    printf("k = %d\n", k);
    printf("avg = %.2f\n", sum / N);

    if (p)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;

}
