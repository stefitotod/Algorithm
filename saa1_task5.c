// Програма за намиране периметъра на триъгълник чрез използване на синусовата теорема 

#include <stdio.h>
#include <math.h>

int main() {
  
    float a, b, c, p, A, B, C;  
    printf("c = ");
    scanf("%f", &c);

    printf("A = ");
    scanf("%f", &A);

    printf("B = ");
    scanf("%f", &B);
    
    C = 180 - A - B;  

    a = c * sin(A) / sin(C);      
    b = c * sin(B) / sin(C); 

    p = a + b + c;
    
    printf("p = %f\n", p);

    return 0;
  
}
