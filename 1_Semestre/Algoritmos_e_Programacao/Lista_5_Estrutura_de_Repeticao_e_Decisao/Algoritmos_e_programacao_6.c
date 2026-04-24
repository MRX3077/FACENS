#include <stdio.h>
#include <stdlib.h>

int quant, sexo, numH = 0, numM = 0, sexoMaisAlto;
float alt, somaAltM = 0, medM, menAlt, maiorAlt;

main() {
    for (quant = 1; quant <= 15; quant++) {
        printf("Qual seu sexo? (1-Homem / 2-Mulher): ");
        scanf("%d", &sexo);
        printf("Qual sua altura? ");
        scanf("%f", &alt);
        if (sexo == 1) {
            numH++;
        } else if (sexo == 2) {
            numM++;
            somaAltM += alt;
        }
        if (quant == 1) {
            menAlt = alt;
            maiorAlt = alt;
            sexoMaisAlto = sexo;
        } else {
            if (alt < menAlt) {
                menAlt = alt;
            }
            if (alt > maiorAlt) {
                maiorAlt = alt;
                sexoMaisAlto = sexo;
            }
        }
    }
    printf("A menor altura do grupo: %.2f\n", menAlt);
    if (numM > 0) {
        medM = somaAltM / numM;
        printf("A media de altura das mulheres: %.2f\n", medM);
    }
    printf("O numero de homens: %d\n", numH);
    if (sexoMaisAlto == 1) {
        printf("O sexo da pessoa mais alta: Masculino\n");
    } else {
        printf("O sexo da pessoa mais alta: Feminino\n");
    }
}