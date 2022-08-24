#include <stdio.h>
#include <stdlib.h>
// Faça  um  fluxograma  para  resolver  o  seguinte  problema,  dado  três  números encontrem o maior.

int main(){

    float a, b , c;

    printf(" Informe primeiro numero: \n");
    scanf("%f", &a);
    printf("Informe segundo numero: \n");
    scanf("%f", &b);
    printf("Informe terceiro numero \n");
    scanf("%f", &c);

    if (b > a && b > c)
           {
        printf("b eh o maior numero");
    }
    else if (a > b && a > c)
    {
        printf("a eh o maior numero");
    }
    else 
    {
        printf("C eh o maior numero");
    }
    


    
    return 0;
}