#include <stdio.h>
#include <math.h>

int main() {
	float x1;
	float y1;
	float x2;
	float y2;
	float distancia;
	
	printf("Digite a coordenada x do primeiro ponto: ");
	scanf("%f", &x1);
	printf("Digite a coordenanda y do primeiro ponto: ");
	scanf("%f", &y1);
	printf("Digite a coordenada x do segundo ponto: ");
	scanf("%f", &x2);
	printf("Digite a coordenada y do segundo ponto: ");
	scanf("%f", &y2);
	
	distancia = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	printf("Distancia entre os pontos: %.2f", distancia);

	return 0;
}
