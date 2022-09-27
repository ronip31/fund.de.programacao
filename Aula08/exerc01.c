#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n;

    printf("Informe numero: \n");
    scanf("%i", &n);
    fflush(stdin);

    //saida dados

switch (n)
{
case 1:
    printf("um \n");
    break;
case 2:
    printf("Dois \n");
    break;
case 3:
    printf("Tres \n");
    break;
default:
    printf("Erro, sem opcao! \n");
   
}








    return 0;
}