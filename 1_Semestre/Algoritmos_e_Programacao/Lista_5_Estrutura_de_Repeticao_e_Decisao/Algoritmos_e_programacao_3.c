#include <stdio.h>
#include <stdlib.h>

int quant, atual=1, quantF;
float num, media, soma=0;

main(){
	printf("Quantos n\xa3meros voc\x88 quer calcular a media? ");
	scanf("%d",&quant);
	for(atual; atual<=quant; atual++){
		printf("Qual seu %d n\xa3mero? ",atual);
		scanf("%f",&num);
		if(num>0){
			soma = soma + num;
			quantF++;
		}
	}
	media = soma / quantF;
	printf("A media somente dos n\xa3meros positivos que voc\x88 informou \x82: %.2f",media);
}