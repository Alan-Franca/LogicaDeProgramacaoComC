#include <stdio.h>

int main() {
    int opcao;
    while (1) {
        printf("\n -- Caixa Eletronico -- \n");
        printf("\n -> 1 para Ver Saldo \n");
        printf("\n -> 2 para Sacar \n");
        printf("\n -> 0 para Sair \n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("\n Você selecionou 0 para sair, tchau tchau ;)");
            break;
        } else if (opcao == 1) {
            printf("Seu saldo eh R$500,00\n");
        } else if (opcao == 2) {
            printf("Saque realizado com sucesso.\n");
        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }    
    }

    printf("Codigo fora do loop executado seu animal...");
    return 0;
}