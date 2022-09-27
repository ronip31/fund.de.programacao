/** sorteio*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    //variaveis
    int ns, np;

    //entrada
    printf("Digite o numero sorteado: \n");
    scanf("%i", &ns);
    fflush(stdin);
    system("cls");
    printf("Digite seu numero: \n");
    scanf("%i", &np);
    fflush(stdin);

    //saida

    if (ns==np){
        printf("Voce ganhou! \n");
    }
    printf("Tente novamente! \n");


return 0;

}