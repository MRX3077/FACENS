#include <stdio.h>
#include <stdlib.h>

int temp;
float val;

main(){
	printf("Digite quantos minutos voc\x88 usou na internet: ");
	scanf("%d",&temp);
	if(temp > 50){
		val = ((temp - 50) * 1.5) + 50;
		printf("O valor da conta ser\xa0 de R$%.2f",val);
	} else{
		printf("O valor da conta ser\xa0 de R$50,00");
	}
}