#include <stdio.h>
#include <stdlib.h>

int divi, ini, fim;

main(){
	printf("Digite o valor do divisor: ");
	scanf("%d",&divi);
	printf("Digite o \xa1nicio do intervalo: ");
	scanf("%d",&ini);
	printf("Digite o fim  do intervalo: ");
	scanf("%d",&fim);
	printf("Os n\xa3meros divis\xa1veis por %d no intervalo de %d a %d: \n",divi, ini, fim);
	do{
		if(ini % 3 == 0){
			printf("%d \n",ini);
		}
		ini++;
	} while(ini<=fim);
}