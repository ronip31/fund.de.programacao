/*
6. Faça um programa que calcule o valor total investido e o custo 
médio por CD. O usuário deverá informar a quantidade de CDs e o 
valor para em cada um.
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

    int quantidade, i, flag;
    float valor, media, soma;


do{
  		printf("Digite a quantidade de CDs: ");
		scanf("%i",&quantidade);
		fflush(stdin); 
        if (quantidade > 0){
            for (i=1;i <=quantidade; i++)
            {
                  printf("Digite o valor do %i Cd: \n", i);
                  scanf("%f", &valor);
                  fflush(stdin);
                soma+=valor;
               }
            
          printf("Valor total gasto e de %.2f reais\n", soma);
          media=soma/quantidade;
          printf("A media gasto em CDs e de: %.2f  reais\n", media);
          flag = 1;
        }else{
			printf("Erro, turmas tem que ser maior 0\n");
			flag = 0;
		}
        
      
} while (flag==0);














    return 0;
}