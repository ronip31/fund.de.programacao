#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n1, n2, n3;

    printf("Digite um numero: \n");
    scanf("%i", &n1);
    fflush(stdin);
    printf("Digite um numero: \n");
    scanf("%i", &n2);
    fflush(stdin);
    printf("Digite um numero: \n");
    scanf("%i", &n3);
    fflush(stdin);

if(n1<n2 && n1<n3){
		if(n2<n3){
			printf("%i, %i, %i\n",n1,n2,n3);
		}else{
			printf("%i, %i, %i\n",n1,n3,n2);
		}
	}else if(n2<n1 && n2<n3){
		if (n1<n3){
			printf("%i, %i, %i\n",n2,n1,n3);
		}else{
			printf("%i, %i, %i\n",n2,n3,n1);
		}
	}else{
		if(n1<n2){
			printf("%i, %i, %i",n3,n1,n2);
		}else{
			printf("%i, %i, %i",n3,n2,n1);
		}
	}
	return 0;
}