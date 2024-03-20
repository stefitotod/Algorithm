// Програма за плащане с най-малък брой монети чрез алчен алгоритъм (итеративен вариант).

// В този случай описваният алчен алгоритъм ще се стреми да ползва най-малък брой монети. 
// Крайният резултат е стремеж за плащане с монети имащи възможно най-голяма номинална стойност.

#include <stdio.h>

const int br = 6;
int moneti[br] = {50, 20, 10, 5, 2, 1};    // В България стотинките са с номинална стойност 1, 2, 5, 10, 20 и 50

void stotinki(int suma)
{
    int i, j;
    j = suma;
    for (i = 0; i < br; i++)
    {
        printf("Broi moneti po %d st. = %d\n", moneti[i], j / moneti[i]);
        j = j % moneti[i];
    }
}

int main()
{
    int sum;
    printf("Enter the number: ");
    scanf("%d", &sum);
    stotinki(sum);
    return 0;
}
