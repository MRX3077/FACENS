#include <stdio.h>
#include <stdlib.h>

int resp, vez;
float num, maior, media;

main(){
	do{
		printf("Digite um n\xa3mero: ");
		scanf("%f",&num);
		if(maior<num){
			maior = num;
		}
		media = media + num;
		do{
			printf("Deseja continuar ou parar? \n");
			printf("1 - Continuar \n");
			printf("2 - Parar \n");
			scanf("%d",&resp);
			if(resp !=1 && resp !=2){
				printf("Op\x87\xc6o inv\xa0lida, digite um valor v\xa0lido. \n");
			}
		} while(resp!=1 && resp!=2);
		vez++;
	} while(resp == 1);
	media = media / vez;
	printf("O maior n\xa3mero digitado foi: %.2f \n",maior);
	printf("A media dos n\xa3meros que voc\x88 digitou foi: %.2f",media);
}