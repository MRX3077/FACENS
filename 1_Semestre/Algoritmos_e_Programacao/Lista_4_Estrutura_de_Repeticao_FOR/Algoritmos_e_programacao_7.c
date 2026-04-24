#include <stdio.h>
#include <stdlib.h>

int aluno;
float notaT, notaP, notaF;

main(){
	for(aluno=1; aluno<=30; aluno++){
		printf("Aluno %d, digite sua media da te\xa2rica: ",aluno);
		scanf("%f",&notaT);
		printf("Aluno %d, digite sua media da pr\xa0tica: ",aluno);
		scanf("%f",&notaP);
		notaF = (notaT * 0.6) + (notaP * 0.4);
		if(notaF>=7){
			printf("Parab\x82ns, voc\x88 foi bem! \n");
		} else if(notaF>=5 && notaF<7){
			printf("Voc\x88 passou, mas foi razo\xa0vel \n");
		} else{
			printf("Voc\x88 foi mal e n\xc6o passou \n");
		}
	}
}