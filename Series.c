#include <stdio.h>

int main() {

    int n, i, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];                                 //int* arr = (int*)malloc(n*sizeof(int));
    
    printf("Please enter the elements of the series: \n");
    
    for(i = 0; i < n; i++){
        printf("a%d: ", i);
        scanf("%d", &arr[i]);
    }

    k = 1;
    for(i = 0; i < n - 2; i += 2){
        if (!(arr[i] < arr[i + 1] && arr[i + 1] > arr[i + 2])) {
            k = 0;
            break;
        }
    }

    if(k){
        printf("The condition a0 < a1 > a2 < ... is fulfilled.\n");
    }
    else{
        printf("Sorry");
    }
    
    //free(arr);

    return 0;

}
