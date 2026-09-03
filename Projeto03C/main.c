#include <stdio.h>
#include <math.h>

int main() {
	float primeiroValor;
	float segundoValor;
	float terceiroValor;
	float quartoValor;
	float media;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &primeiroValor);
	printf("Digite o segundo valor: ");
	scanf("%f", &segundoValor);
	printf("Digite o terceiro valor: ");
	scanf("%f", &terceiroValor);
	printf("Digite o quarto valor: ");
	scanf("%f", &quartoValor);
	
	media = (primeiroValor+segundoValor+terceiroValor+quartoValor)/4;
	printf("Media aritmetica: %.2f", media);

	return 0;
}