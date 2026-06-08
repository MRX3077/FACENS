#include <stdio.h>
#include <stdlib.h>

int main(){
	int vez1, vez2;
	float matriz[3][3];
	
	for(vez1=0; vez1<3; vez1++){
		for(vez2=0; vez2<3; vez2++){
			printf("Digite o valor da [%d] [%d]",vez1, vez2);
			while(scanf("%f",&matriz[vez1][vez2])!=1){
				printf("Valor inv\xa0lido, digite um numero: ");
				while(getchar()!='\n');
			}
			matriz[vez1][vez2] = matriz[vez1][vez2] * 2;
		}
	}
	printf("Matriz: \n");
	for(vez1=0; vez1<3; vez1++){
		for(vez2=0; vez2<3; vez2++){
			printf("[%8.2f]",matriz[vez1][vez2]);
		}
		printf("\n");
	}
}