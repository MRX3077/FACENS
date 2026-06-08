#include <stdio.h>
#include <stdlib.h>

int main(){
	int vez1, vez2, pos1=0, pos2=0;
	float matriz[5][3], maior=0;
	
	for(vez1=0; vez1<5; vez1++){
		for(vez2=0; vez2<3; vez2++){
			printf("Digite o valor da [%d] [%d]: ", vez1+1, vez2+1);
			while(scanf("%f",&matriz[vez1][vez2])!=1){
				printf("Valor inv\xa0lido, digite um numero: ");
				while(getchar()!='\n');
			}
		}
	}
	for(vez1=0; vez1<5; vez1++){
		for(vez2=0; vez2<3; vez2++){
			if(maior<matriz[vez1][vez2]){
				maior = matriz[vez1][vez2];
				pos1 = vez1;
				pos2 = vez2;
			}
		}
	}
	printf("O maior valor da matriz foi: %.2f \n", maior);
	printf("A linha do maior valor foi %d e a linha foi %d", pos1+1, pos2+1);
}