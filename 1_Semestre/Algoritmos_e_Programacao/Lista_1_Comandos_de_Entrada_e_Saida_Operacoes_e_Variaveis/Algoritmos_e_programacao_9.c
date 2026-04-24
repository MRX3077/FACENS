#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int a, pot, ra;
	printf("Digite o n\xa3mero para calcular a raiz e sua oitava pot\x88ncia: ");
	scanf("%d",&a);
	pot = pow(a,8);
	ra = sqrt(a);
	printf("\n A oitava po\x88ncia de %d = %d e a raiz quadrada = %d",a,pot,ra);
}