#include <stdio.h>
#include <stdlib.h>
//Faça um programa que peça dois números e imprima o maior deles.

int main (void){
    float n1, n2;

    printf("Digite primeiro numero: \n");
    scanf("%f", &n1);
    printf("Digite segundo numero \n");
    scanf("%f", &n2);

    if (n1>n2)
    {
        printf("Primeiro numero maior");
    }
    else
        printf("Segundo numero maior \n");


    return 0;
}