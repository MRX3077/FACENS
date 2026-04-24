#include <stdio.h>
#include <stdlib.h>

int acao;
float num1, num2, som, divi, mult, sub;

int main(){
	printf("Digite o primeiro n\xa3mero: ");
	scanf("%f",&num1);
	printf("Digite o segundo n\xa3mero: ");
	scanf("%f",&num2);
	som = num1 + num2;
	divi = num1 / num2;
	mult = num1 * num2;
	sub = num1 - num2;
	printf("Digite o n\xa3mero referente a a\x87\x83o que deseja realizar: ");
	scanf("%d",&acao);
	if(acao == 1){
		printf("O resultado da soma entre %.2f e %.2f \x82 %.2f",num1, num2, som);
	} else if(acao == 2){
		printf("O resultado da subtra\x87\x83o entre %.2f e %.2f \x82 %.2f",num1, num2, sub);
	} else if(acao == 3){
		printf("O resultado da multiplica\x87\x83o entre %.2f e %.2f \x82 %.2f",num1, num2, mult);
	} else if(acao == 4){
		printf("O resultado da divis\x83o entre %.2f e %.2f \x82 %.2f",num1, num2, divi);
	} else{
	printf("Op\x87\x83o inv\xa0lida, selecione uma das opcoes abaixo: \n");
	printf("1 - Soma \n");
	printf("2 - Subtra\x87\x83o \n");
	printf("3 - Multiplica\x87\x83o \n");
	printf("4 - Divis\x83o \n");
	}
}