/*
3. Faça um programa que leia dez números inteiros e calcule a 
diferença entre o maior e o menor número do conjunto.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int numero, maior, menor, i, resultado;
	
	// entrada
	for(i=1;i<=10;i++){
		printf("Digite um numero: ");
		scanf("%i",&numero);
		fflush(stdin);
		if(i==1){
			maior=numero;
			menor=numero;
		}else{
			if(maior<numero){
				maior=numero;
			}
			if(menor>numero){
				menor=numero;
			}
		}
	}
	
	// processamento
	resultado = maior - menor;
	
	// saída 
	printf("O a diferenca e %i", resultado);
	
	return 0;
}