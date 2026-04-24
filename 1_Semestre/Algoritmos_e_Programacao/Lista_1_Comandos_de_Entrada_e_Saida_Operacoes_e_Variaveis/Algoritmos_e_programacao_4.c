#include<stdio.h>
#include<stdlib.h>

main(){
	int a, mult, ano, sub;
	printf("Que ano \202 hoje?\n");
	scanf("%d",&ano);
	printf("Que ano voc\210 nasceu?\n");
	scanf("%d",&a);
	sub = ano - a;
	mult = sub * 365;
	printf("\n  Voc\210 esta vivo a aproximadamente %d dias",mult);
}