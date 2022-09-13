#include <stdio.h>
#include <stdlib.h>

int main(void){

    float n1, n2, n3, m;
    printf("gd n1: \n");
    scanf("%f", &n1);
    fflush(stdin);
    printf("gd n2: \n");
    scanf("%f", &n2);
    fflush(stdin);
    printf("gd n3: \n");
    scanf("%f", &n3);
    fflush(stdin);
    m=(n1+n2+n3)/3;

    if (m>=6)
    {
        printf("Aprovado, media %.2f", m);
    }
    else {
        printf("Reprovado, media %.2f", m);
    }

    return 0;
}