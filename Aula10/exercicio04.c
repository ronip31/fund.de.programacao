/*
4. Faça um programa que calcule e mostre a média bimestral da turma. 
O usuário deve informar a quantidade de notas, bem como cada nota.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float nota, media, soma=0;
	int qtd_notas, i, flag;
	
	// entrada
   do{
  	    printf("Digite a quantidade de notas: ");
	    scanf("%i",&qtd_notas);
	    fflush(stdin);
      if(qtd_notas > 0){    
	    for(i=1;i<=qtd_notas;i++){
	    	printf("Digite a %i nota: ",i);
	    	scanf("%f",&nota);
	    	fflush(stdin);
	    	if(nota>=0 && nota<=10){
	    		soma+=nota;
	    	}else{
	    		printf("Erro, fora do intervalo de nota\n");
	    		i--;
	    	}
    
        } 
    // processamento
	media=soma/qtd_notas;
	// saída
	        printf("A media e %.2f\n",media);
            flag = 1;
            
             }else{
			printf("Erro, quantidades de notas tem que ser maior 0\n");
			flag = 0;
             }
   }while(flag ==0);	

	return 0;
}	
	