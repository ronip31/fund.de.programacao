/*
FaÃ§a um programa que calcule e mostre  a mÃ©dia  bimestral da turma. 
O usuÃ¡rio deve informar a quantidade de notas, bem como cada nota.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variÃ¡veis
    int q, mc;
    float n = 0, m = 0;
    int count = 1;
    float soma;

    printf("Digite a quantidade de notas: ");
	scanf("%i",&q);
    fflush(stdin);
    mc=q;
    for (q=q+1 ; q != count; count++)
    {
        printf("Digite nota %i: \n", count);
        scanf("%f",&n);
        fflush(stdin);
        soma = soma+n;
        printf("%f \n", soma);
    }
    
    m = (soma/mc);
    printf(" media: %f \n", m);

return 0;
}