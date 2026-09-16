#include <stdio.h>

int main() {
    float nota;
    do {
        printf("Digite uma a nota: ");
        scanf("%f", &nota);
        if (nota < 0 || nota > 10) {
            printf("Nota invalida ANIMAL! Tente novamente.\n");
        }
    } while (nota < 0 || nota > 10);
    printf("Nota valida registrada %.2f", nota);
        
    return 0;
}