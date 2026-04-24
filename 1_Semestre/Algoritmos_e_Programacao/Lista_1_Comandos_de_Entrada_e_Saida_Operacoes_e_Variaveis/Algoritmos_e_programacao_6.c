#include <stdio.h>
#include <stdlib.h>

int base, alt, result;

main(){
	printf("Digite a medida da base do tri\x83ngulo ");
	scanf("%d",&base);
	printf("Digite a altura do tri\x83ngulo: ");
	scanf("%d",&alt);
	result = (base*alt)/2;
	printf("\n A \xa0rea do tri\x83ngulo \x82: %d",result);
}