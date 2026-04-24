#include <stdio.h>
#include <stdlib.h>

float nota1, nota2, divi, falt;

main(){
	printf("Digite sua nota da primeira prova: ");
	scanf("%f",&nota1);
	printf("Digite sua nota da segunda prova: ");
	scanf("%f",&nota2);
	divi = (nota1 + nota2) / 2;
	if(divi >= 5){
		printf("Voc\x88 foi aprovado");
	} else{
		falt = 5 - divi;
		printf("Falta %.2f para voc\x88 ser aprovado", falt);
	}
}