#include <stdio.h>
#include <stdlib.h>
//Façaum programa que peça um número e se este número for par, transforme-o em ímpar e vice-versa.
int main (void){

 int n1, n2;

    printf("Digite um numero: \n");
    scanf("%i", &n1);

    if (n1 % 2 == 0)
    {
        //n1=n1+1;
        printf("Numero %i PAR \n", n1);
        printf("Entao soma mais 1  ficando: %i ,IMPAR\n", n1+1 );
    } else {
        printf("Numero %i eh IMPAR \n", n1);
        printf("Entao soma mais 1  ficando: %i ,PAR\n", n1+1 );
    }
    








    return 0;
}