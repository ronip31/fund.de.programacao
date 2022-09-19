#include <stdio.h>
#include <stdlib.h>

int main (void){
	// variáveis?
	int ns, np;
	
	// entrada?
	printf("Digite o numero sorteado: ");
	scanf("%i", &ns);
	system("cls");
	fflush(stdin);
	printf("Digite seu numero: \n");
	scanf("%i", &np);
	fflush(stdin);
	
	// saída
	if(ns==np){
		printf("Voce ganhou!\n");
	}
	printf("Tente novamente\n");
		
	return 0;
}