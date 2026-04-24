#include <stdio.h>
#include <stdlib.h>

float num;

main(){
	printf("Digite um n\xa3mero para verificar se ele \x82 positivo, negativo ou nulo: ");
	scanf("%f",&num);
	if(num < 0){
		printf("O n\xa3mero %.2f \x82 negativo",num);
	} else if(num > 0){
		printf("O n\xa3mero %.2f \x82 positivo",num);
	} else{
		printf("O n\xa3mero %.2f \x82 nulo",num);
	}
}