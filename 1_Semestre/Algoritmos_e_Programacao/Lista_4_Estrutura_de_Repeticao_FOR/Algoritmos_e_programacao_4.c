#include <stdio.h>
#include <stdlib.h>

int num1, num2;

main(){
	printf("Digite seu primeiro numero: ");
	scanf("%d",&num1);
	printf("Digite seu segundo numero: ");
	scanf("%d",&num2);
	if(num1<num2){
		for(num1++; num1<num2; num1++){
			printf("O n\xa3mero %d est\xa0 dentro do intervalo \n",num1);
		}
	} else{
		for(num2++; num2<num1; num2++){
			printf("O n\xa3mero %d est\xa0 dentro do intervalo \n",num2);
		}
	}
}