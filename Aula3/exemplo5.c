// início
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	char nome[50];
	int idade, ano;
	
	// entrada de dados
	printf("Digite seu nome: ");
	//scanf("%s",nome);
	gets(nome);
	fflush(stdin);
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	fflush(stdin);
	
	// processamento dos dados
	ano = 2022-idade;
	
	// saída de dados
	printf("Seu nome e %s e voce nasceu em %i\n",nome,ano);
	
	// saída
	
// fim
	return 0;
}