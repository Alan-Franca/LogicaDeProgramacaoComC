#include <stdio.h>

int main() {
	int valorTabuada;
	printf("Digite um valor de 1 a 10: ");
	scanf("%d", &valorTabuada);
	for (int i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", valorTabuada, i, valorTabuada*i);
	}
	return 0;
}