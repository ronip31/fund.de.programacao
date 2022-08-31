#include <stdio.h>
#include <stdlib.h>
//Construa um programa que converta metros para centímetros.

int main (void){

    float m, c;

    printf("Informe o metro a ser convertido: \n");
    scanf("%f", &m);
    fflush(stdin);
    c=(m/100);

    printf("Valor em centimetros:" "%f", c);

   return 0;
}


