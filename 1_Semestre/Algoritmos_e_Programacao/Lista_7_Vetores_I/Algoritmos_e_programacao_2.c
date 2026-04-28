#include <stdio.h>
#include <stdlib.h>

int vez=1;
float num[10];

main(){
	do{
		printf("Digite seu %d n\xa3mero: ",vez);
		while(scanf("%f",&num[vez]) !=1){
			printf("Valor inv\xa0lido, digite um n\xa0mero: ");
			while(getchar()!='\n');
		}
		vez++;
	} while(vez<=10);
	for(vez=10; vez>=1; vez--){
		printf("Seu %d n\xa3mero foi: %.2f \n",vez,num[vez]);
	}
}