#include <stdio.h>
#include <stdlib.h>

float peso, alt, IMC;

int main(){
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	printf("Digite sua altura: ");
	scanf("%f",&alt);
	IMC = peso / (alt * alt);
	if(IMC < 18.5){
		printf("Seu IMC \x82 %.2f, voc\x88 est\xa0 abaixo do peso", IMC);
	} else if(IMC >= 18.5 && IMC < 25){
		printf("Seu IMC \x82 %.2f, voc\x88 est\xa0 saud\xa0vel", IMC);
	} else if(IMC >= 25 && IMC <30){
		printf("Seu IMC \x82 %.2f, voc\x88 est\xa0 com sobrepeso", IMC);
	} else if(IMC >=30 && IMC <35){
		printf("Seu IMC \x82 %.2f, voc\x88 est\xa0 com obesideda grau I", IMC);
	} else if(IMC >=35 && IMC <40){
		printf("Seu IMC \x82 %.2f, voc\x88 esta\xa0 com obesidade grau II (Severa)", IMC);
	} else if(IMC >=40){
		printf("Seu IMC \x82 %.2f, voc\x88 est\xa0 com obesidade grau III (M\xa2rbida)", IMC);
	}
}