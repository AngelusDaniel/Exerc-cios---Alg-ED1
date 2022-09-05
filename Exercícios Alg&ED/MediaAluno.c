#include <stdio.h>

float nota1;
float nota2;
float media;

int main()
{
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a primeira nota: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;
    
    printf ("\n %f", media);

    return 0;
}
