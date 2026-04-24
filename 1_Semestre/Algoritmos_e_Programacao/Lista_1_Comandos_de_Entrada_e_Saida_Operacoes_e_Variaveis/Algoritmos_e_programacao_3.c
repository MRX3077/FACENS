#include<stdio.h>
#include<stdlib.h>

main(){
	int a, mult;
	printf("Digite o valor em metros:");
	scanf("%d",&a);
	mult = a * 100;
	printf("\n %dm em cent\241metros: %dcm",a,mult);
}