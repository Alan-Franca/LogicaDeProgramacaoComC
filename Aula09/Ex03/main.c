#include <stdio.h>

int main () {
    float salarios[7];
    float maior = salarios[0];
    float soma = 0.0f;
    int qtdAbaixo = 0;
    for (int i = 0; i < 6;i++) {
        printf("Digite o %d salario: ", i+1);
        scanf("%f", &salarios[i]);
        soma += salarios[i];
    }
    float media = soma/6;
    printf("Media salarial: R$%.2f\n", media);
    for (int i = 0; i < 6; i++) {
        if (salarios[i] > maior) {
            maior = salarios[i];
        }
    }
    printf("Maior salario: R$%.2f\n", maior);
    for (int i = 0; i < 7; i++) {
        if (salarios[i] < media) {
            qtdAbaixo +=1;
        }
    }
    printf("Salarios abaixo da media: %d", qtdAbaixo);
}