#include <stdio.h>
#include <stdlib.h>

int main(){
	int vez, cont, par=0;
	float media=0, impar=1;
	printf("Quantos numeros deseja digitar? ");
	while(scanf("%d",&cont)!=1 || cont > 100 || cont < 0){
		printf("Valor digitado inv\xa0lido, digite um numero abaixo de 100 e acima de 0: ");
		while(getchar()!='\n');
	}
	float vet[cont];
	for(vez=0; vez<cont; vez++){
		printf("Digite seu %d valor do vetor: ", vez+1);
		while(scanf("%f",&vet[vez])!=1){
			printf("Valor digitado inv\xa0lido, digite um numero: ");
			while(getchar()!='\n');
		}
		if(vez%2!=0){
			impar = impar * vet[vez];
		} else{
			par++;
			media = media + vet[vez];
		}
	}
	if(cont==1){
		impar=0;
	}
	media = media / par;
	printf("A media foi: %.2f \n",media);
	printf("O produto dos numeros impares digitados foi: %.2f",impar);
}