#include <stdio.h>

int main() {
    int i, num, soma = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número nenem: ", i);
        scanf("%d", &num);
        soma += num;
    }

    printf("A soma acumulada eh: %d\n", soma);
    return 0;
}