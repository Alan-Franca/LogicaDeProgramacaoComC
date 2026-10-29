#include <stdio.h>

int main(void) {
    FILE *arquivo;
    arquivo = fopen("tabuada.txt", "w");
    int number, i[10];
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    printf("--- Calculadora de Taubada ---\n");
    printf("Digite um número: ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++) {
        fprintf(arquivo, "%d x %d = %d\n", number, i, number * i);
    }

    fclose(arquivo);

    return 0;
}