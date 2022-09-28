#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int i1, i2, i3, i4;

    float m;

    printf("DDigite a 1 iddade: ");
	scanf("%i",&i1);
	fflush(stdin);
    printf("DDigite a 2 iddade: ");
	scanf("%i",&i2);
	fflush(stdin);   
    printf("DDigite a 3 iddade: ");
	scanf("%i",&i3);
	fflush(stdin);   
    printf("DDigite a 4 iddade: ");
	scanf("%i",&i4);
	fflush(stdin); 

    // processamento
	m=(i1+i2+i3+i4)/4.0;
	
	// saída
	if(m<=25){
		printf("Turma jovem\n");
	}else if(m>25 && m<=40){
		printf("Turma adulta\n");
	}else{
		printf("Turma idosa\n");
	}

	return 0;
}   