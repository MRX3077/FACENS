#include <stdio.h>
#include <stdlib.h>

int ext1, ext2, duv;

main(){
	printf("Digite um n\xa3mero para ser uma das extremidades: ");
	scanf("%d",&ext1);
	printf("Digite um n\xa3mero para ser a outra extremidade: ");
	scanf("%d",&ext2);
	printf("Digite o n\xa3mero que deseja verificar se est\xa0 no intervalo: ");
	scanf("%d",&duv);
	if(duv > ext1 && duv < ext2){
		printf("O n\xa3mero %d est\xa0 dentro do intervalo",duv);
	} else{
		printf("O n\xa3mero %d est\xa0 fora do intervalo",duv);
	}
}