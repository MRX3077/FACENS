#include <stdio.h>
#include <stdlib.h>

float dist, gas, con;

main(){
	printf("Quantos KM voc\x88 percorreu?\n");
	scanf("%f",&dist);
	printf("Quantos L de gasolina foram gastos neste trajeto?\n");
	scanf("%f",&gas);
	con = dist / gas;
	printf("O consumo medio de gasolina gasta no trajeto %.2fKM \x82 de: %.2fL",dist, con);
}