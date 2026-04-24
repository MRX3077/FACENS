#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, rest;
	float div;
	printf("Digite o primeiro n\xa3mero da divis\xc6o: ");
	scanf("%d",&a);
	printf("Digite o segundo n\xa3mero da divis\xc6o: ");
	scanf("%d",&b);
	div = a / b;
	rest = a % b;
	printf("\n %d / %d = %.2f e o resto \x82 %d",a,b,div,rest);
}