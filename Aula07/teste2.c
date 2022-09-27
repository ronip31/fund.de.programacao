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
<<<<<<< HEAD
	scanf("%i", &ns);
	system("cls");
=======
	scanf("%i",&ns);
>>>>>>> 037e0a452dc06ab574b08553112149cd4e307342
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