#include <stdio.h>
#include <stdlib.h>

int num, den;
float res;

main(){
	printf("Digite seu numerador: ");
	scanf("%d",&num);
	printf("Digite seu denominador: ");
	scanf("%d",&den);
	if (den != 0){
		res = num / den;
		printf("O resultado da divis\xc6o \x82: %.2f",res);
	} else{
		printf("N\xc6o existe divis\xc6o por 0");
	}
}