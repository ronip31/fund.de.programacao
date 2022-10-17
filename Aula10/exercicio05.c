/*
5. Faça um programa que calcule o número médio de alunos por turma. 
Para isto, peça a quantidade de turmas e a quantidade de alunos 
para cada turma. As turmas não podem ter mais de 40 alunos.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int alunos, turmas, i, soma=0, flag;
	float media;
	
	// entrada
	do{
		printf("Digite a quantidade de turmas: ");
		scanf("%i",&turmas);
		fflush(stdin);
		if(turmas > 0 ){
			for(i=1;i<=turmas;i++){
				printf("Digite a quantidade de alunos para turma %i: ",i);
				scanf("%i",&alunos);
				fflush(stdin);
				if(alunos>=1 && alunos <=40){
					soma+=alunos;
				}else{
					printf("Erro, fora o intervalo.\n");
					i--;
				}
			}
		
			// processamento
			media=(float)soma/turmas;
		
			// saída
			printf("A media por turma e %.1f",media);
			flag = 1;
		}else{
			printf("Erro, turmas tem que ser maior 0\n");
			flag = 0;
		}
	}while(flag ==0);
		
	return 0;
}
	