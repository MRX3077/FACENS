#include <stdio.h>
#include <stdlib.h>

float lado1, lado2, lado3;

main(){
	printf("Digite qual a medida da base do tri\x83ngulo: ");
	scanf("%f",&lado1);
	printf("Digite qual a medida de um dos lados do tri\x83ngulo: ");
	scanf("%f",&lado2);
	printf("Digite qual a medida do outro lado do tri\x83ngulo: ");
	scanf("%f",&lado3);
	if (lado1 == lado2 && lado1 == lado3){
		printf("Voc\x88 est\xa0 diante de um tri\x83ngulo equil\xa0tero");
	} else if ((lado1 == lado2 && lado1 != lado3) || (lado2 == lado3 && lado2 != lado1)){
		printf("Voc\x88 est\xa0 diante de um tri\x83ngulo is\xa2seles");
	} else {
		printf("Voc\x88 est\xa0 diante de um tri\x83ngulo escaleno");
	}
}