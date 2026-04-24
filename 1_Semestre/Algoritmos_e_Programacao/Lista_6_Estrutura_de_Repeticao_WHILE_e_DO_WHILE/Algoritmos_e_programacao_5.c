#include <stdio.h>
#include <stdlib.h>

int resp, cont;
float num1, num2, som, sub, mult, divi;

main(){
	do{
		printf("Escolha a a\x87\xc6o que deseja realizar: \n");
		printf("1 - Soma \n");
		printf("2 - Subtra\x87\xc6o \n");
		printf("3 - Multiplica\x87\xc6o \n");
		printf("4 - Divis\xc6o \n");
		printf("5 - Sair \n");
		scanf("%d",&resp);
		do{
			if(resp<1 || resp>5){
				printf("Op\x87\xc6o inv\xa0lida, digite um valor v\xa0lido: ");
				scanf("%d",&resp);
			}
		} while(resp<1 || resp>5);
		if(resp!=5){
			printf("Digite o 1\xa7 n\xa3mero da sua conta: ");
			scanf("%f",&num1);
			printf("Digite o 2\xa7 n\xa3mero da sua conta: ");
			scanf("%f",&num2);
			if(resp==1){
				som = num1 + num2;
				printf("Seu resultado \x82: %.2f \n",som);
			} else if(resp==2){
				sub = num1 - num2;
				printf("Seu resultado \x82: %.2f \n",sub);
			} else if(resp==3){
				mult = num1 * num2;
				printf("Seu resultado \x82: %.2f \n",mult);
			} else if(resp==4){
				divi = num1 / num2;
				printf("Seu resultado \x82: %.2f \n",divi);
			}
			printf("Deseja continua? \n");
			printf("1 - Sim \n");
			printf("2 - N\xc6o \n");
			scanf("%d",&cont);
			do{
				if(cont!=1 && cont!=2){
					printf("Op\x87\xc6o inv\xa0lida, digite um valor v\xa0lido: ");
					scanf("%d",&cont);
				}
			} while(cont!=1 && cont!=2);
			if(cont==2){
				resp = 5;
			} else if(cont==1){
				printf("Escolha a a\x87\xc6o que deseja realizar: \n");
				printf("1 - Soma \n");
				printf("2 - Subtra\x87\xc6o \n");
				printf("3 - Multiplica\x87\xc6o \n");
				printf("4 - Divis\xc6o \n");
				scanf("%d",&resp);
			}
		}
	} while(resp>=1 && resp<=4);
}