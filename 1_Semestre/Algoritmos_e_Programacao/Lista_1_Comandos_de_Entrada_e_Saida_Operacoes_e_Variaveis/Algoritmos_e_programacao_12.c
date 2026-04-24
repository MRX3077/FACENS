#include <stdio.h>
#include <stdlib.h>

int hor, ext, sal;

main(){
	printf("Digite quantas horas normais voc\x88 trabalhou este m\x88s: ");
	scanf("%d",&hor);
	printf("Digite quantas horas extras voc\x88 trabalhou este m\x88s: ");
	scanf("%d",&ext);
	sal = (hor * 10) + (ext * 15);
	printf("Seu sal\xa0rio este m\x88s ser\xa0 de %d",sal);
}