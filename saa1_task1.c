// Изчисляване повърхността на триъгълник по формулата на Херон

#include <stdio.h>
#include <math.h>

int main() {
  
    float a, b, c, p, s;

    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    printf("c = ");
    scanf("%f", &c);
    
    p = (a + b + c) / 2;

    s = sqrt(p * (p - a) * (p - b) * (p - c));
    
    printf("s = %f\n", s);

    return 0;
  
}
