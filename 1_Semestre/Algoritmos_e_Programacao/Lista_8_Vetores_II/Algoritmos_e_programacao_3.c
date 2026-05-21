#include <stdio.h>
#include <stdlib.h>

int main(){
	int vez;
	float A[12], B[12];
	
	for(vez=0; vez<12; vez++){
		printf("Digite o valor do %d numero do seu vetor A: ", vez+1);
		while(scanf("%f",&A[vez])!=1){
			printf("Caractere inv\xa0lido, digite um numero: ");
			while(getchar()!='\n');
		}
	}
	for(vez=0; vez<12; vez++){
		if(vez%2==0){
			B[vez] = A[vez] / 2;
		} else{
			B[vez] = A[vez] * 3;
		}
		printf("O %d valor do vetor B foi: %.2f \n",vez+1, B[vez]);
	}
}