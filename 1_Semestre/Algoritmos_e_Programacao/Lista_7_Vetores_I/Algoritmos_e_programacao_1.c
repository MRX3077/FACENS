#include <stdio.h>
#include <stdlib.h>

int vez=1;
float num[10];

main(){
	do{
		printf("Digite seu %d n\xa3mero: ",vez);
		while(scanf("%f",&num[vez]) !=1){
			printf("Valor digitado incorreto, digite um n\xa3mero v\xa0lido: ");
			while(getchar() != '\n');
		}
		vez++;
	}while(vez<=10);
	for(vez=1; vez<=10; vez++){
		printf("Seu %d n\xa3mero digitado foi: %.2f \n",vez,num[vez]);
	}
}