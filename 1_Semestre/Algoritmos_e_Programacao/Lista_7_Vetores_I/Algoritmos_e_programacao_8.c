#include <stdio.h>
#include <stdlib.h>

int vez=1;
float num[10], par;

main(){
	do{
		printf("Digite seu %d n\xa3mero: ",vez);
		while(scanf("%f",&num[vez])!=1 || num[vez]<1){
			printf("Valor inv\xa0lido, digite um n\xa3mero positivo: ");
			while(getchar()!='\n');
		}
		vez++;
	} while(vez<=10);
	for(vez=1; vez<=10; vez++){
		if(vez % 2 != 0){
			par = par + num[vez];
		}
	}
	printf("A soma dos valores impares digitados foi: %.2f",par);
}