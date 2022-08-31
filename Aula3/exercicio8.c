#include <stdio.h>
#include <stdlib.h>

//Construa um programa que peça as 4 notas bimestrais e mostre a média.

int main(void){

    float n1, n2, n3, n4, m;

    //entrada dados
    printf("Digite nota 1:" );
    scanf("%f" ,&n1);
    fflush(stdin);
    printf("Digite nota 2:" );
    scanf("%f" ,&n2);
    fflush(stdin);
    printf("Digite nota 3:" );
    scanf("%f" ,&n3);
    fflush(stdin);  
    printf("Digite nota 4:" );
    scanf("%f" ,&n4);
    fflush(stdin);
   
   //processamento
    m=(n1+n2+n3+n4)/4;

     printf("Media eh: " "%f", m);

    return 0;
}
