#include <stdio.h>
#include <stdlib.h>

int main() {
    int vez1, vez2;
    float matriz[4][3];

    for (vez1=0; vez1<4; vez1++) {
        for (vez2=0; vez2<3; vez2++) {
            printf("Digite o valor [%d][%d]: ", vez1+1, vez2+1);
            while (scanf("%f", &matriz[vez1][vez2])!=1){
                printf("Valor inv\xa0lido, digite um numero: ");
                while (getchar() != '\n');
            }
        }
    }
    printf("Matriz:\n");
    for (vez1=0; vez1<4; vez1++) {
        for (vez2=0; vez2<3; vez2++) {
            printf("%8.2f", matriz[vez1][vez2]);
        }
        printf("\n");
    }
}