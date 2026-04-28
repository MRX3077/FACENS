#include <stdio.h>
#include <stdlib.h>

int vez=1, qnt;
float num[12];

main(){
	do{
		printf("Digite seu %d n\xa3mero: ",vez);
		while(scanf("%f",&num[vez])!=1){
			printf("Valor digitado inv\xa0lido, digite um n\xa3mero: ");
			while(getchar()!='\n');
		}
		vez++;
	} while(vez<=12);
	for(vez=1; vez<=12; vez++){
		if(num[vez]<0){
			printf("O %d n\xa3mero digitado era negativo: %.2f \n",vez,num[vez]);
			qnt++;
		}
	}
	printf("%d dos n\xa3meros digitados eram negativos.",qnt);
}