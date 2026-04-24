#include <stdio.h>
#include <stdlib.h>

int num10, quantP, quantN;
float desc;

main(){
	for(num10=1; num10<=10; num10++){
		printf("Digite seu %d n\xa3mero: ",num10);
		scanf("%f",&desc);
		if(desc<0){
			quantN++;
		} else{
			quantP++;
		}
	}
	printf("Voc\x88 digitou %d n\xa3meros positivos e %d n\xa3meros negativos",quantP,quantN);
}