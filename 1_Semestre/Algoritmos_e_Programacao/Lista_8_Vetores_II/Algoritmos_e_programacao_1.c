#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet1[5], vet2[5], result=0, vez;
	
	for(vez=0; vez<5; vez++){
		printf("Digite o %d do 1 vetor: ",vez+1);
		while(scanf("%d",&vet1[vez])!=1){
			printf("Valor inv\xa0lido, digite um numero: ");
			while(getchar()!='\n');
		}
	}
	for(vez=0; vez<5; vez++){
		printf("Digite o %d do 2 vetor: ",vez+1);
		while(scanf("%d",&vet2[vez])!=1){
			printf("Valor inv\xa0lido, digite um numero: ");
			while(getchar()!='\n');
		}
	}
	for(vez=0; vez<5; vez++){
		result = result + vet1[vez] * vet2[vez];
	}
	printf("O produto escalar dos seus vetores e: %d",result);
}