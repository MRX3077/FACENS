#include <stdio.h>
#include <stdlib.h>

int vez=1, qtd=0;
float num[10], esc;

main(){
	do{
		printf("Digite seu %d n\xa3mero: ",vez);
		while(scanf("%f",&num[vez-1])!=1){
			printf("Valor incorreto, digite um n\xa3mero v\xa0lido: ");
			while(getchar()!='\n');
		}
		vez++;
	} while(vez<=10);
	printf("Digite um n\xa3mero: ");
	do{
		scanf("%f",&esc);
		for(vez=0; vez<=9; vez++){
			if(esc==num[vez]){
				qtd++;
			}
		}
		if(qtd==0){
			printf("Inv\xa0lido, digite um n\xa3mero que digitou anteriormente: ");
		}
		while(getchar()!='\n');
	} while(qtd==0);
	printf("O n\xa3mero digitado foi repetido %d vezes.",qtd);
}