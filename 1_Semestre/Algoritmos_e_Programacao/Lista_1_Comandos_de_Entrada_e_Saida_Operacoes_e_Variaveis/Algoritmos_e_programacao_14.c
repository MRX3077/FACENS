#include <stdio.h>
#include <stdlib.h>

float teo1, teo2, prat1, prat2, notaf;

main(){
	printf("Digite sua nota da primeira prova da teoria: ");
	scanf("%f",&teo1);
	printf("Digite sua nota da segunda prova da teoria: ");
	scanf("%f",&teo2);
	printf("Digite sua nota da primeira prova da pr\xa0tica: ");
	scanf("%f",&prat1);
	printf("Digite sua nota da segunda prova da pr\xa0tica: ");
	scanf("%f",&prat2);
	notaf = (((teo1 + teo2) / 2) - (((teo1 + teo2) / 2) * 0.4)) + (((prat1 + prat2) / 2) - (((prat1 + prat2) / 2) * 0.6));
	printf("Sua nota final do semestre \x82 de: %.2f",notaf);
}