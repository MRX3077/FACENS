#include <stdio.h>
#include <stdlib.h>

float nota1, nota2, media;

main(){
	do{
		printf("Qual foi sua nota da 1\xa7 prova? ");
		scanf("%f",&nota1);
		if(nota1<0 || nota1>10){
			printf("Nota inv\xa0lida, digite o valor correto. \n");
		}
	} while(nota1<0 || nota1>10);
	do{
		printf("Qual foi sua nota na 2\xa7 prova? ");
		scanf("%f",&nota2);
		if(nota2<0 || nota2>10){
			printf("Nota inv\xa0lida, digite o valor correto. \n");
		}
	} while(nota2<0 || nota2>10);
	media = (nota1 + nota2) / 2;
	printf("Sua media foi de: %.2f",media);
}