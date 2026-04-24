#include <stdio.h>
#include <stdlib.h>

float num1, num2;

main(){
	printf("Digite um n\xa3mero: ");
	scanf("%f",&num1);
	printf("Digite outro n\xa3mero: ");
	scanf("%f",&num2);
	if(num1 < num2){
		printf("O n\xa3mero %.2f \x82 maior que %.2f",num2, num1);
	} if(num1 > num2){
		printf("O n\xa3mero %.2f \x82 maior que %.2f",num1, num2);
	}
}