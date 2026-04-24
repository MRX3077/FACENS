#include <stdio.h>
#include <stdlib.h>

int n;
float num, dob;

main(){
	for(n=1; n<=10; n++){
		printf("Qual seu %d n\xa3mero? \n",n);
		scanf("%f",&num);
		dob = num * 2;
		printf("O dobro do seu n\xa3mero \x82: %.2f \n",dob);
	}
}