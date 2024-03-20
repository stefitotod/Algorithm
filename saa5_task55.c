#include <stdio.h>

#define N 5
int a[N];

void Sort() {
  
    int i, j, temp;
    for (i = N - 1; i >= 0; i--) {
        for (j = 1; j <= i; j++) {
            if (a[j - 1] > a[j]) {
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }
  
}

int Sort_Search(int value) {
  
    int l = 0, r = N - 1, mid = 0;
    while (l <= r) {
        mid = (l + r) / 2;
        if (a[mid] == value)
            return mid;
        else {
            if (value < a[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
    }
  
    return -1;
  
}

int main() {
  
    int i, n, index;

    printf("Enter the elements of the one-dimensional array\n");
    for (i = 0; i < N; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &a[i]);
    }

    Sort();

    printf("\nThe elements of the sorted one-dimensional array\n");
    for (i = 0; i < N; i++) {
        printf("arr[%d] = %d\n", i, a[i]);
    }

    printf("\nEnter the element: ");
    scanf("%d", &n);

    index = Sort_Search(n);

    if (index == -1)
        printf("%d is not an element of the array\n", n);
    else
        printf("The index of %d is %d\n", n, index);

    return 0;
  
}
