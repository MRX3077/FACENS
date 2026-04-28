#include <stdio.h>
#include <stdlib.h>

int vez=1;
float num[8];

main(){
	do{
		printf("Digite seu %d n\xa3mero: ",vez);
		while(scanf("%f",&num[vez])!=1){
			printf("Valor incorreto, digite um n\xa3mero: ");
			while(getchar()!='\n');
		}
		vez++;
	} while(vez<=8);
	printf("Digite qual n\xa3mero deseja visualizar: ");
	while(scanf("%d",&vez)!=1 || (vez<1 || vez>8)){
		printf("Valor incorreto, digite um n\xa3mero: ");
		while(getchar()!='\n');
	}
	printf("O n\xa3mero %d foi: %.2f",vez,num[vez]);
}