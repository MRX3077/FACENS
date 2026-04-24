#include <stdio.h>
#include <stdlib.h>

int vez=10;

main(){
	for(vez+=2; vez<80; vez+=2){
		printf("O n\xa3mero %d est\xa0 dentro do intervalo de 10 e 80, e \x82 par \n",vez);
	}
}