#include <stdio.h>

int main() {
	int idade;
	printf("Digite qual a sua idade: ");
	scanf("%d", &idade);
	if (idade < 16) {
		printf("Não eleitor");
	} else if (idade >= 18 || idade <= 69) {
		printf("Eletor obrigatório");
	} else if (idade >= 16 || idade >= 70) {
		printf("Eleitor opcional");
	}
	return 0;
}