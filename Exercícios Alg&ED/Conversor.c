#include <stdio.h>

float f;
float c;

int main()
{
    printf("Insira o valor em Fahrenheit: ");
    scanf("%f", &f);
    
    c = (f - 32) * 5 / 9;
    
    printf ("\n %f", c);

    return 0;
}
