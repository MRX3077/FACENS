#include <stdio.h>
#include <stdlib.h>

int ano;

main(){
	printf("Digite o ano que deseja verificar se foi bisexto: ");
	scanf("%d",&ano);
	if(ano % 4 == 0 && ano % 100 != 0){
		printf("%d foi bisexto",ano);
	} else{
		printf("%d n\xc6o foi bisexto",ano);
	}
}