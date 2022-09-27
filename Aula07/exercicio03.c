#include <stdio.h>
#include <stdlib.h>
//Faça um programa que peça um número e imprima se o número é par ou ímpar.
int main (void){

    int n1;

    printf("Digite um numero: \n");
    scanf("%i", &n1);

    if (n1 % 2 == 0)
    {
        printf("Numero PAR");
    } else {

    printf("Numero IMPAR");

    }
    




    return 0;
}