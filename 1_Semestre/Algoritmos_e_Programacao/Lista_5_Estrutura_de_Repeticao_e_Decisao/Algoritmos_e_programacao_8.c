#include <stdio.h>
#include <stdlib.h>

int quantA, quantD, al, dis;
float media, nota;

main(){
	printf("Quantos alunos est\xc6o cursando o 3\xa7 semestre? ");
	scanf("%d",&quantA);
	for(al=1; al<=quantA; al++){
		printf("%d\xa7 aluno, quantas disciplinas voc\x88 cursou no 2\xa7 semestre? ",al);
		scanf("%d",&quantD);
		for(dis=1; dis<=quantD; dis++){
			printf("%d\xa7 aluno, qual foi sua nota na %d\xa7 mat\x82ria? ",al, dis);
			scanf("%f",&nota);
			
			media = media + nota;
		}
		media = media / quantD;
		printf("%d\xa7 aluno, sua media do semestre passado foi: %.2f \n\n",al, media);
		media = 0;
	}
}