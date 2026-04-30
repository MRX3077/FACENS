#include <stdio.h>
#include <stdlib.h>

int vez, s=0;
float num[10], invnum[10];

int main(){
    for(vez=0; vez<10; vez++){
        printf("Digite o %d n\xa3mero: ", vez+1);
        while(scanf("%f",&num[vez])!=1){
            printf("Valor inv\xa0lido! Digite um n\xa3mero: ");
            while(getchar()!='\n');
        }
    }
    for(vez=0; vez<10; vez++){
        invnum[vez]=num[9-vez];
    }
    printf("Vetor original: ");
    for(vez=0; vez<10; vez++){
        printf("%.0f ",num[vez]);
    }
    printf("\n");
    printf("Vetor invertido: ");
    for(vez=0; vez<10; vez++){
        printf("%.0f ",invnum[vez]);
    }
    printf("\n");
    printf("Posicoes: ");
    for(vez=0; vez<10; vez++){
        if(num[vez]==invnum[vez]){
            printf("%d ",vez);
            s++;
        }
    }
    if(s==0){
        printf("Nenhuma");
    }
}