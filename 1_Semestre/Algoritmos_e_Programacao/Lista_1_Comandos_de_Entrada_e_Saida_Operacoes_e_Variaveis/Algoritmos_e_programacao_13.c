#include <stdio.h>
#include <stdlib.h>

int dia;
float liq, mult;

main(){
	printf("Digite o n\xa3mero de dias trabalhados: ");
	scanf("%d",&dia);
	mult = (35 * dia);
	liq = mult - (mult * 0.08);
	printf("O valor l\xa1quido a ser pago \x82 de: R$%.2f",liq);
}