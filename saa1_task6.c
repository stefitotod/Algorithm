// Програма за намиране на максимума на три числа

#include <stdio.h>

int main() {
   
    int a, b, c, max;

    printf("a = "); 
    scanf("%d", &a);
    
    printf("b = "); 
    scanf("%d", &b);
    
    printf("c = "); 
    scanf("%d", &c);

    if (a > b) {
        max = a;
    }
    else {
        max = b;
    }
    
    if (c > max) {
        max = c;
    }

    printf("max = %d\n", max);

    return 0; 

}
