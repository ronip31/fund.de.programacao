#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float n1, n2, r;
	
	// entrada de dados
	printf("Digite n1: ");
	scanf("%f",&n1);
	printf("Digite n2: ");
	scanf("%f",&n2);
	
	// processamento dos dados
	r=n1*2+n2/2;
	
	// saída de dados
	printf("O resultado e %f.",r);

    return 0;
}