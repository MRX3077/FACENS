#include <stdio.h>
#include <stdlib.h>

float FAHHH, cel;

main(){
	printf("Digite a temperatura em fahrenheit: ");
	scanf("%f",&FAHHH);
	cel = (FAHHH-32)/1.8;
	printf("\n A temperatura em celsius \x82: %.2f",cel);
}