#include <stdio.h>
#include <stdlib.h>

int op;
float saldo, dep, ret;

main(){
	printf("Qual o saldo inical da conta? ");
	scanf("%f",&saldo);
	do{
		printf("Qual opera\x87\xc6o deseja realizar? \n")/
		printf("1 - Dep\xa2sito \n");
		printf("2 - Retirada \n");
		printf("3 - Sair \n");
		scanf("%d",&op);
		while(op<1 || op>3){
			printf("Op\x87\xc6o inv\xa0lida, digite um valor correto: ");
			scanf("%d",&op);
		}
		if(op==1){
			printf("Quanto deseja depositar? ");
			scanf("%f",&dep);
			saldo = saldo + dep;
		} else if(op==2){
			printf("Quanto deseja retirar da conta? ");
			scanf("%f",&ret);
			saldo = saldo - ret;
		}
	} while(op!=3);
	if(saldo<0){
		printf("Saldo: R$%.2f, sua conta esta estourada",saldo);
	} else if(saldo==0){
		printf("Saldo: R$%.2f, sua conta esta zerada",saldo);
	} else{
		printf("Saldo: R$%.2f, sua conta \x82 preferencial",saldo);
	}
}