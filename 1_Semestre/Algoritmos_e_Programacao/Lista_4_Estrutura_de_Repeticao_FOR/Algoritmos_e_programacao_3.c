#include <stdio.h>
#include <stdlib.h>

int vez;
float num;

main(){
	for(vez=1; vez<=10; vez++){
		printf("Digite seu %d n\xa3mero para verificar se ele \x82 positivo ou negativo: ",vez);
		scanf("%f",&num);
		if(num<0){
			printf("Seu %d n\xa3mero %.2f \x82 negativo. \n",vez,num);
		} else{
			printf("Seu %d n\xa3mero %.2f \x82 positivo. \n",vez,num);
		}
	}
}