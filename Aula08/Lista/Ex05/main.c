#include <stdio.h>

int main() {
    int n, soma = 0;
    printf("Digite um numero mengue: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    printf("Soma de 1 ate %d eh: %d\n", n, soma);
    return 0;
}