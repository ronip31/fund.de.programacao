/*
9. Faça um programa que calcule e mostre a soma dos números 
pares entre 100 e 200 (inclusive). O usuário deve ter a opção 
de repetir quantas vezes quiser esta operação.
*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
	// variáveis
	char opcao;
	int i, soma=0;
	
	// saída e processamento
	do{
		system("cls");
		for(i=100;i<=200;i+=2){
			soma+=i;
		}
		printf("A soma e %i\n\n",soma);
		printf("Repetir a operacao (s/n): ");
		scanf("%c",&opcao);
		fflush(stdin);
	}while(opcao!='n');
	
	return 0;
}
