#include <stdio.h>
#include <stdlib.h>

int vez=1;
float num[15], dobro[15];

main(){
	do{
		printf("Digite o seu %d n\xa3mero: ",vez);
		while(scanf("%f",&num[vez])!=1){
			printf("Valor incorreto, favor digitar um n\xa3mero: ");
			while(getchar()!='\n');
		}
		vez++;
	} while(vez<=15);
	for(vez=1; vez<=15; vez++){
		dobro[vez] = num[vez] *  2;
		printf("O dobro do seu %d n\xa3mero foi: %.2f \n",vez,dobro[vez]);
	}
}