#include <stdio.h>
#include <stdlib.h>

int main(){
	int vez1=0, vez2=0;
	float matriz[3][4], soma=0;
	
	for(vez1=0; vez1<3; vez1++){
		for(vez2=0; vez2<4; vez2++){
			printf("Digite o valor da [%d] [%d]: ",vez1+1, vez2+1);
			while(scanf("%f",&matriz[vez1][vez2])!=1){
				printf("Valor inv\xa0lido, digite um numero: ");
				while(getchar()!='\n');
			}
		}
	}
	printf("Matriz: \n");
	for(vez1=0; vez1<3; vez1++){
		for(vez2=0; vez2<4; vez2++){
			soma = soma + matriz[vez1][vez2];
		}
	}
	printf("A soma da matriz foi: %.2f",soma);
}