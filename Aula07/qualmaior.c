#include <stdio.h>
#include <stdlib.h>

int main (void){

    float a, b;

    printf("Digite n1: \n");
    scanf("%f", &a);
    fflush(stdin);
    printf("Digite n1: \n");
    scanf("%f", &b);  
    fflush(stdin);

    if (a==b)
    {
        printf("iguais");
    }
    else if (a>b)
    {
        printf("a maior");
    }
    else 
    {
        printf("b maior");
    }
    

    return 0;
}