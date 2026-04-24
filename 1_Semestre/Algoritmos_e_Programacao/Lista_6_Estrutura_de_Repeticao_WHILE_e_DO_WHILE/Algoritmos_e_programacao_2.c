#include <stdio.h>
#include <stdlib.h>

int quant=0;

main(){
	do{
		if(quant % 2 != 0){
			printf("%d \n",quant);
		}
		quant++;
	} while (quant<=100);
}