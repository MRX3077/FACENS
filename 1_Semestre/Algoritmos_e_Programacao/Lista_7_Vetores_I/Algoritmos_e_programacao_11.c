#include <stdio.h>
#include <stdlib.h>

int vez, qntd, s=0;

main(){
	printf("Qual o tamanho do n\xa3mero palindromo que ir\xa0 digitar? ");
	while(scanf("%d",&qntd)!=1){
		printf("Valor inv\xalido, digite um n\xa3mero: ");
		while(getchar()!='\n');
	}
	float num[qntd];
	printf("Digite n\xa3mero a \xa3mero separado do seu palindromo: ");
	for(vez=0; vez<qntd; vez++){
		while(scanf("%f",&num[vez])!=1){
			printf("Valor inv\xa0lido, digite um n\xa3mero: ");
			while(getchar()!='\n');
		}
	}
	for(vez=0; vez<qntd/2; vez++){
		if(num[vez]!=num[qntd-1-vez]){
			s=1;
		}
	}
	if(s==0){
		printf("Seu n\xa3mero era um palindromo.");
	} else {
		printf("Seu n\xa3mero nao era um palindromo.");
	}
}