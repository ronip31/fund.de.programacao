/*
Faça um programa que peça dois números inteiros e gere os números inteiros que 
estão no intervalo entre eles.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis?
	int n1, n2, i;
	
	// entrada?
	printf("Digite o valor n1: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite o valor n2: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	// processamento e saída
	if(n1<n2){
		for(i=n1+1;i<n2;i++){
			printf("%i, ",i);
		}
	}else if (n2<n1){
		for(i=n1-1;i>n2;i--){
			printf("%i, ",i);
		}
	}
	
	
	return 0;
}