/*
10) Faça um programa que implemente uma calculadora simples. O programa deve 
solicitar os operandos e o operador e mostrar a entrada e o resultado. Inclua 
verificadores de erro para operadores inválidos e tentativa de divisão por
zero. O menu será como segue:
[ 1 ] Adição
[ 2 ] Subtração
[ 3 ] Multiplicação
[ 4 ] Divisão
[ 5 ] Fim
R.:
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	// variáveis
	int opcao;
	float n1, n2, r;
	
	do{
		// Entrada
		system("cls");
		printf("[ 1 ] Adicao\n");
		printf("[ 2 ] Subtracao\n");
		printf("[ 3 ] Multiplicacao\n");
		printf("[ 4 ] Divisao\n");
		printf("[ 5 ] Fim\n");
		printf("Digite uma opcao: ");
		scanf("%i",&opcao);
		fflush(stdin);
		
		// processamento e saída
		switch(opcao){
			case 1:
				// entrada
				system("cls");
				printf("Digite n1:");
				scanf("%f",&n1);
				fflush(stdin);
				printf("Digite n2:");
				scanf("%f",&n2);
				fflush(stdin);
				
				// processamento 
				r=n1+n2;
				
				//saída
				printf("%f + %f = %f\n",n1, n2, r);
				
				break;
			case 2:
				// entrada
				system("cls");
				printf("Digite n1:");
				scanf("%f",&n1);
				fflush(stdin);
				printf("Digite n2:");
				scanf("%f",&n2);
				fflush(stdin);
				
				// processamento 
				r=n1-n2;
				
				//saída
				printf("%f - %f = %f\n",n1, n2, r);
				break;
			case 3:
				// entrada
				system("cls");
				printf("Digite n1:");
				scanf("%f",&n1);
				fflush(stdin);
				printf("Digite n2:");
				scanf("%f",&n2);
				fflush(stdin);
				
				// processamento 
				r=n1*n2;
				
				//saída
				printf("%f x %f = %f\n",n1, n2, r);
				break;
			case 4:
				// entrada
				system("cls");
				printf("Digite n1:");
				scanf("%f",&n1);
				fflush(stdin);
				printf("Digite n2:");
				scanf("%f",&n2);
				fflush(stdin);
				
				// processamento 
				if(n2!=0){
					r=n1/n2;
				
					//saída
					printf("%f + %f = %f\n",n1, n2, r);
				}else{
					printf("Erro, divisao por zero\n");
				}
				
				break;
			case 5:
				printf("Saindo...\n");
				break;
			default:
				printf("Erro, opcao invalida");
		}
		getch();
	}while(opcao!=5);

	return 0;
}