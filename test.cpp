#include <stdio.h>

int main(){
	int idade;
	float altura;
	char inicial;
	
	printf("Digite a inicial do seu nome: ");
	scanf("%c", &inicial);
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	printf("\n--- Dados Registrados ---\n");
	printf("Idade: %d anos\n", &idade);
	printf("Inicial: %c", inicial);
	printf("Altura: %2.f metros\n", &altura);
	
	return 0;
}
