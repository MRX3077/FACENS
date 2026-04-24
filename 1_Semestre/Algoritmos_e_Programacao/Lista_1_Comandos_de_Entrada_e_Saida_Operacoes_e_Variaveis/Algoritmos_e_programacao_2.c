#include<stdio.h>
#include<stdlib.h>

main(){
	int a, b, soma, div;
	printf("Digite o primeiro n\243mero:");
	scanf("%d",&a);
	printf("Digite o segundo n\243mero:");
	scanf("%d",&b);
	soma = a + b;
	div = soma / 2;
	printf("\n (%d + %d)/2 = %d",a,b,div);
}