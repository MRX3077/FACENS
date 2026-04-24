#include <stdio.h>
#include <stdlib.h>

float num1, num2, num3;

main(){
	printf("Digite o primeiro n\xa3mero: ");
	scanf("%f",&num1);
	printf("Digite o segundo n\xa3mero: ");
	scanf("%f",&num2);
	printf("Digite o terceiro n\xa3mero: ");
	scanf("%f",&num3);
	if(num1 == num2 && num1 != num3){
		printf("O primeiro e o segundo n\xa3mero se repentem, sendo: %.2f",num1);
	} else if(num2 == num3 && num2 != num1){
		printf("O segundo e o terceiro n\xa3mero se repetem, sendo: %.2f",num2);
	} else if(num1 == num3 && num1 != num2){
		printf("O primeiro e o terceiro n\xa3mero se repetem, sendo: %.2f",num1);
	} else if(num1 == num2 && num1 == num3){
		printf("Todos os n\xa3meros est\xc6o repetidos, sendo: %.2f",num1);
	} else{
		printf("Todos os n\xa3meros s\xc6o diferentes, sendo o priemrio: %.2f, o segundo: %.2f e o terceriro %.2f",num1, num2, num3);
	}
}