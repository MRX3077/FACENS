#include <stdio.h>
#include <stdlib.h>

int num;

main(){
	printf("Digite um n\x83mero para verificar se ele est\xa0 na faixa de 0 a 9: ");
	scanf("%d",&num);
	if(num >= 0 && num <= 9){
		printf("Seu n\xa3mero est\xa0 na faixa");
	} else {
		printf("Seu n\xa3mero n\x83o est\xa0 na faixa de 0 a 9");
	}
}