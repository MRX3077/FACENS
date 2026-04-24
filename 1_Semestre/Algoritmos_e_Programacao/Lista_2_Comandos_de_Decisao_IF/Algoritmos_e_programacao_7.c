#include <stdio.h>
#include <stdlib.h>

float sal, sal5, sal7;

main(){
	printf("Digite seu s\xa0lario atual: ");
	scanf("%f",&sal);
	if(sal <= 1000){
		sal5 = sal + (sal * 0.05);
		printf("Seu novo s\xa0lario vai ser: R$%.2f",sal5);
	} else{
		sal7 = sal + (sal *0.07);
		printf("Seu novo s\xa0lario vai ser: R$%.2f",sal7);
	}
}