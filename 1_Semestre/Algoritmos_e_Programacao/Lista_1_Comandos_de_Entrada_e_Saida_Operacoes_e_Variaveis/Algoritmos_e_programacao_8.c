#include <stdio.h>
#include <stdlib.h>

float raio, per;

main(){
	printf("Digite o raio do c\xa1rculo: ");
	scanf("%f",&raio);
	per = 2*3.14*raio;
	printf("\n O per\xa1metro do c\xa1rculo e: %.2f",per);
}