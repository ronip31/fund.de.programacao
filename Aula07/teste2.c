/*
Problema: Como sortear um número?
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis?
	int ns, np;
	
	// entrada?
	printf("Digite o numero sorteado: ");
	scanf("%i",&ns);
	fflush(stdin);
	system("cls");
	printf("Digite seu numero: ");
	scanf("%i",&np);
	fflush(stdin);
	
	// saída
	if(ns==np){
		printf("Voce ganhou! \n");
	}
	printf("Tente novamente \n");
		
	return 0;
}