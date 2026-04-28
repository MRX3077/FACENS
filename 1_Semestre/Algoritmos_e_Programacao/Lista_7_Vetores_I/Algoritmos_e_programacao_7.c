#include <stdio.h>
#include <stdlib.h>

int vez, num[50];

main(){
	for(vez=1; vez<=100; vez++){
		if(vez % 2 == 0){
			num[vez] = vez;
			printf("O n\xa3mero %d e par \n",num[vez]);
		}
	}
}