#include <stdio.h>
#include <stdlib.h>

float dist, time, vel;

main(){
	printf("Qual foi a dist\x83ncia percorrida? ");
	scanf("%f",&dist);
	printf("Quanto tempo demorou para percorrer este trajeto? ");
	scanf("%f",&time);
	vel = dist / time;
	printf("A velocidade media foi de %.2fkm/h",vel);
}