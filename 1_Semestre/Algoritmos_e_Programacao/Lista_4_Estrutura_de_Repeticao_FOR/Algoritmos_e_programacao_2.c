#include <stdio.h>
#include <stdlib.h>

int vez;
float mult, num;

int main(){
	printf("Digite seu n\xa3mero: ");
	scanf("%f",&num);
	for(vez=1; vez <= 10; vez++){
		mult = num * vez;
		printf("O seu n\xa3mero %.2f multiplicado por %d \x82 igual a: %.2f \n",num,vez,mult);
	}
}