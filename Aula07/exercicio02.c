#include <stdio.h>
#include <stdlib.h>

//Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo.
int main (void){

    float n1;

    printf("Digite um numero Real: \n");
    scanf("%f",&n1);
    
    if (n1 > 0)
    {
        printf("Numero Positivo");
    }
    else

    printf("Numero negativo");



    return 0;
}