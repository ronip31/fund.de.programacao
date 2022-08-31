#include <stdio.h>
#include <stdlib.h>
//Construa um programa que calcule a área de um círculo. a=pi*r²

int main (void){

    float a, r;

    printf("Informe o raio do circulo: \n");
    scanf("%f", &r);
    fflush(stdin);
    a=3.1415*(r*r);

	printf("A area do circulo eh:" "%f", a);

    return 0;
}