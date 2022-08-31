//Uma firma contrata um encanador a 250,00 por dia. Crie um programa que solicite o número de dias 
//trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, 
//sabendo-se que são descontados 8% para o Imposto de Renda.

#include <stdio.h>
#include <stdlib.h>


int mai(void){

    int dias;

    printf("Informe a quantidade de dias trabalhados: \n");
   // scanf("%i" &dias);


    printf("Seu salario liquido e R$: %.i", dias*250*0.92);

    return 0;
}
