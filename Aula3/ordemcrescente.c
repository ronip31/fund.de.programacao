#include <stdio.h>
#include <stdlib.h>

// Faça um fluxograma para resolver o seguinte problema, dado três números coloquem em ordem crescente.

int main(){

float a, b, c;

    printf(" Informe primeiro numero: \n");
    scanf("%f", &a);
    fflush(stdin);
    printf("Informe segundo numero: \n");
    scanf("%f", &b);
    printf("Informe terceiro numero \n");
    scanf("%f", &c);
    fflush(stdin);
    if (a < b && a < c && b < c)
    {
        printf(" A < B < C");
    } else if (b < c && b < a && c < a)
    {
        printf(" B < C < A");
    } else if (c < b && b < a)
    {
        printf(" C < B < A");
    } else {
        printf("C < A < B");
    }
    
        return 0;
}