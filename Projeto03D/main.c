#include <stdio.h>
#include <math.h>

int main() {
	float nota01;
	float nota02;
	float nota03;
	float mediaPonderada;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota01);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota02);
	printf("Digite a terceira nota: ");
	scanf("%f", &nota03);
	
	mediaPonderada = ((nota01*1)+(nota02*2)+(nota03*4))/(1+2+4);
	printf("Media ponderada: %.2f", mediaPonderada);

	return 0;
}