#include <stdio.h>
#include <stdlib.h>

int quant10;
float num, maior, menor;

main(){
	for(quant10=1; quant10<=10; quant10++){
		printf("Digite seu %d n\xa3mero: ",quant10);
		scanf("%f",&num);
		if(quant10==1){
			maior = num;
			menor = num;
		} else{
			if(num>maior){
				maior = num;
			} else if(num<menor){
				menor = num;
			}
		}
	}
	printf("O Menor n\xa3mero digitado foi %.2f enquanto o maior foi %.2f",menor,maior);
}