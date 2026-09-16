#include <stdio.h>

int main() {
    int primeiroNum, segundoNum, soma, sub, multi;
    scanf("Digite o primeiro numero: %d", &primeiroNum);
    scanf("Digite o segundo numero: %d", &segundoNum);
    soma = primeiroNum+segundoNum;
    sub = primeiroNum-segundoNum;
    multi = primeiroNum*segundoNum;
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", sub);
    printf("Multiplicacao: %d\n", multi);
    return 0;
}