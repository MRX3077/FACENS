#include <stdio.h>
#include <stdlib.h>

int num;

main(){
	printf("Digite um n\xa3mero: ");
	scanf("%d",&num);
	if(num <= 0){
		printf("Seu n\xa3mero \x82 negativo");
	} else {
		printf("Seu n\x83mero \x82 positivo");
	}
}