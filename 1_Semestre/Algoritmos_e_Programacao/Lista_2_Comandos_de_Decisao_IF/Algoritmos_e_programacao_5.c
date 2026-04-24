#include <stdio.h>
#include <stdlib.h>

float num1, num2;

int main(){
	printf("Digite um n\xa3mero: ");
	scanf("%f",&num1);
	printf("Digite outro n\xa3mero: ");
	scanf("%f",&num2);
	if(num1 < num2){
		printf("%.2f \x82 maior",num2);
	} else{
		printf("%.2f \x82 maior",num1);
	}
}