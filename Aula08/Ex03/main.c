#include <stdio.h>

void verificadorDeIdade (int idade) {
    if (idade < 0) {
        printf("Erro, digita sapoha direito caralho!\n");
        return;
    }
    if (idade >= 16) {
        printf("Voce ja pode votar.\n");
    } else {
        printf("Voce ainda nao pode votar.\n");
    }
}

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    verificadorDeIdade(idade);

    return 0;
}