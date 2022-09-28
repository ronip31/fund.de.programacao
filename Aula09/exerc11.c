/*
11) Faça um programa que pergunte em que turno você estuda.
Peça para digitar Mmatutino ou V-Vespertino ou N-Noturno. 
Imprima a mensagem Bom Dia!, Boa Tarde! ou Boa Noite! 
ou Valor Inválido!, conforme o caso.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	char turno;
	
	// entrada
	printf("Digite o turno que voce estuda: ");
	scanf("%c",&turno);
	fflush(stdin);
	
	switch(turno){
		case 'm': case 'M':
			printf("Bom dia\n");
			break;
		case 'v': case 'V':
			printf("Boa tarde\n");
			break;
		case 'n': case 'N':
			printf("Boa noite\n");
			break;
		default:
			printf("Erro, opcao invalida\n");
	}
	
	
	return 0;
}