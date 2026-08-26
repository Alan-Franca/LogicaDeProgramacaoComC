#include <stdio.h>

int main() {
	int entradaProdutosMatutino, entradaProdutosVespertino;
	printf("Quantidade recebida pela manha: ");
	scanf("%d", &entradaProdutosMatutino);
	printf("Quantidade recebida de tarde: ");
	scanf("%d", &entradaProdutosVespertino);
	int entradaDiaria = entradaProdutosMatutino+entradaProdutosVespertino;
	printf("Total de produtos recebidos hoje: ");
	printf("%d", entradaDiaria);
	return 0;
}