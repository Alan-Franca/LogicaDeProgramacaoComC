#include <stdio.h>

int main () {
    float salarios[4];
    float soma = 0.0f;
    for (int i = 0; i < 4;i++) {
        printf("Digite o %d salario: ", i+1);
        scanf("%f", &salarios[i]);
        soma += salarios[i];
    }
    float media = soma/4;
    printf("Funcionario 1: R$%.2f\n", salarios[1]);
    printf("Funcionario 2: R$%.2f\n", salarios[2]);
    printf("Funcionario 3: R$%.2f\n", salarios[3]);
    printf("Funcionario 4: R$%.2f\n", salarios[4]);
    printf("--- Media Salarial ---\n");
    printf("-> R$%.2f\n", media);
    return 0;
}