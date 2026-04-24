#include <stdio.h>
#include <stdlib.h>

int quant=0;

main(){
	while(quant<=100){
		if(quant % 2 == 0){
			printf("%d \n",quant);
		}
		quant++;
	}
}