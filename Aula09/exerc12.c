/*
12) Faça um programa que leia um número e exiba o dia 
correspondente da semana. (1-Domingo, 2- Segunda, etc.), se 
digitar outro valor deve aparecer valor inválido.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int numero;
	
	// entrada
	printf("Digite o numero correspondente da semana: ");
	scanf("%i",&numero);
	fflush(stdin);
	
	// saída
	switch(numero){
		case 1:
			printf("1 - Domingo\n");
			break;
		case 2:
			printf("2 - Segunda\n");
			break;
		case 3:
			printf("3 - Terca\n");
			break;
		case 4:
			printf("4 - Quarta\n");
			break;
		case 5:
			printf("5 - Quinta\n");
			break;
		case 6:
			printf("6 - Sexta\n");
			break;
		case 7:
			printf("7 - Sababo\n");
			break;
		default: 
			printf("Erro, nao ha opcao\n");
	}
	
	return 0;
}