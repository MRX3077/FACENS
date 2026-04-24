#include <stdio.h>
#include <stdlib.h>

int idade, gen;
float alt, peso, id, dist;

main(){
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	if (idade < 12 || idade > 65){
		printf("Voc\x88 n\xc6o precisa do \xa1ndice");
	} else{
		printf("Qual seu g\x88nero? \n");
		printf("1 - Masculino \n");
		printf("2 - Feminino \n");
		scanf("%d",&gen);
		printf("Digite sua altura: ");
		scanf("%f",&alt);
		printf("Digite seu peso: ");
		scanf("%f",&peso);
		if (idade >= 12 && idade <= 17){
			printf("Voc\x88 \x82 Adolescente \n");
		} else if (idade >= 18 && idade <= 25){
			printf("Voc\x88 \x82 Jovem \n");
		} else if (idade >= 26 && idade <= 65){
			printf("Voc\x88 \x82 Adulto \n");
		}		
		if (gen == 1){
			id = (72.7 * alt) - 62;
			dist = peso - id;
			printf("O seu peso atual \x82 de %.2fKG, o ideal \x82 %.2fKG, falta %.2fKG",peso,id,dist);
		} else{
			id = (62.1 * alt) - 48.7;
			dist = peso - id;
			printf("O seu peso atual \x82 de %.2fKG, o ideal \x82 %.2fKG, falta %.2fKG",peso,id,dist);
		}
	}
}