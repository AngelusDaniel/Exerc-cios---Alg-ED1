#include <stdio.h>

float distancia;
float consumo;
float media;

int main()
{
    printf("Insira a distancia em km: ");
    scanf("%f", &distancia);
    printf("Insira o consumo total: ");
    scanf("%f", &consumo);
    
    media = distancia / consumo  ;
    
    printf ("\n %f", media);

    return 0;
}
