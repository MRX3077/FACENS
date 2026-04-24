#include <stdio.h>
#include <stdlib.h>

int maria, joao, jose, nulo, branco, voto, votos=0;
float percent;

main(){
	do{
		do{
			printf("Em quem voc\x88 vota? \n");
			printf("1 - Jos\x82 \n");
			printf("2 - Maria \n");
			printf("3 - Jo\xc6o \n");
			printf("4 - Branco \n");
			printf("5 - Nulo \n");
			while(scanf("%d",&voto) !=1 || (voto<0 || voto>5)){
				printf("Valor incorreto, digite o n\xa3mero correto: ");
				while(getchar() != '\n');
			}
			if(voto==1){
				printf("Votado em Jos\x82 com sucesso \n");
				jose++;
			} else if(voto==2){
				printf("Votado em Maria com sucesso \n");
				maria++;
			} else if(voto==3){
				printf("Votado em Jo\xc6o com sucesso \n");
				joao++;
			} else if(voto==4){
				printf("Votado em branco com sucesso \n");
				branco++;
			} else{
				printf("Votado nulo com sucesso \n");
				nulo++;
			}
			votos++;
		} while(voto!=0);
		printf("O n\xa3mero de votos em Jos\x82 foi: %d \n",jose);
		printf("O n\xa3mero de votos em Maria foi: %d \n",maria);
		printf("O n\xa3mero de votos em Jo\xc6o foi: %d \n",joao);
		printf("O n\xa3mero de votos em branco foi: %d \n",branco);
		printf("O n\xa3mero de votos nulos foi: %d \n",nulo);
		if(jose>maria && jose>joao){
			printf("O candidato eleito a prefeito foi Jos\x82, com %d votos \n",jose);
			percent = ((float)jose / votos) * 100;
			printf("%.2f%% o elegeram",percent);
		} else if(maria>joao && maria>jose){
			printf("O candidato eleito a prefeito foi Maria, com %d votos \n",maria);
			percent = ((float)maria / votos) * 100;
			printf("%.2f%% a elegeram",percent);
		} else if(joao>jose && joao>maria){
			printf("O candidato eleito a prefeito foi Jo\xc6o, com %d votos \n",joao);
			percent = ((float)joao / votos) * 100;
			printf("%.2f%% o elegeram",percent);
		} else if(jose==maria && jose>joao){
			printf("Empate ocorrido entre Jos\x82 e Maria com abos recebendo %d votos, necess\xa0rio fazer uma nova vota\x87\xc6o \n",jose);
		} else if(jose==joao && jose>maria){
			printf("Empate ocorrido entre Jos\x82 e Jo\xc6o com ambos recebendo %d votos, necess\xa0rio fazer uma nova vota\x87\xc6o \n",jose);
		} else if(maria=joao && maria>jose){
			printf("Empate ocorrido entre Maria e Jo\xc6o com ambos recebendo %d votos, necess\xa0rio fazer uma nova vota\x87\xc6o \n",maria);
		} else{
			printf("Empate ocorrido entre os 3 candidatos com ambos recebendo %d votos, necess\xa0rio fazer uma nova votac\x87\xc6o \n",jose);
		}
	} while(jose==maria && jose==joao && maria==joao);
}