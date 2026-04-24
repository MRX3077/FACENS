#include <stdio.h>
#include <stdlib.h>

int quant15, filho, somaF, mediaF;
float salario, mediaS, somaS, maiorS=0, percent=0, percentS;

main(){
	for(quant15=1; quant15<=15; quant15++){
		printf("Quantos filhos voc\x88 tem? ");
		scanf("%d",&filho);
		printf("Qual seu sal\xa0rio? ");
		scanf("%f",&salario);
		somaF = somaF + filho;
		somaS = somaS + salario;
		if(salario>maiorS){
			maiorS = salario;
		}
		if(salario<=500){
			percent++;
		}
	}
	quant15--;
	mediaF = somaF / quant15;
	mediaS = somaS / quant15;
	percentS = (percent / quant15) * 100;
	printf("A media salarial da cidade \x82 de R$%.2f \n",mediaS);
	printf("A media de quantidade de filhos \x82 de %d \n",mediaF);
	printf("O maior sal\xa0rio \x82 de R$%.2f \n",maiorS);
	printf("A porcentagem de habitantes que recebem R$500,00 ou menos \x82 de %.2f%% ",percentS);
}