#include <stdio.h>
#include <stdlib.h>

int quant, atual=1;
float num, media, soma=0;

main(){
	printf("Quantos n\xa3meros voc\x88 deseja calcular a media? ");
	scanf("%d",&quant);
	for(atual; atual<=quant; atual++){
		printf("Digite seu %d n\xa3mero: ",atual);
		scanf("%f",&num);
		
		soma = soma + num;
	}
	media = soma / quant;
	printf("A media ficou: %.2f",media);
}