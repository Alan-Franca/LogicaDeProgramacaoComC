#include <stdio.h>

int main () {
    int valores[8];
    float soma = 0.0f;
    float media = soma/8;
    int qtdacima = 0;
    for (int i = 0; i < 8; i++) {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &valores[i]);
        soma += valores[i];
    }
    float media = soma/8;
    printf("Media valores: %.2f\n", media);

    for (int i = 0; i < 8; i++) {
        if (valores[i] > media) {
            qtdacima +=1;
        }
    }
    printf("Valores acima da media: %d", qtdacima);
    return 0;
}