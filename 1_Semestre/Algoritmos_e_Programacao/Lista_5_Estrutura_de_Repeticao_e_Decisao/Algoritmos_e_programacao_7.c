#include <stdio.h>
#include <stdlib.h>

int quant, a;

main(){
	for(quant=1; quant<=5; quant++){
		for(a=1; a<=quant; a++){
			printf("*");
		}
		printf("\n");
	}
}