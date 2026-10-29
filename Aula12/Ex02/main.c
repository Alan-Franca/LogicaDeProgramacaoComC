#include <stdio.h>

int main(void) {
    FILE *arquivo;
    arquivo = fopen("consumo.txt", "a");
    int i[7];
    char dia;   
    float consumo;

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("--- Registro de Consumo de Energia ---\n");
    for (int i = 0; i < 7; i++) {
        fprintf(arquivo, "Dia: \n", dia);
        scanf("%d", &dia);
        fprintf(arquivo, "Consumo: \n", consumo);
        scanf("%d", &consumo);
    }
    
    printf("Consumo da %da semana registrado com sucesso!\n", i + 1);
    fclose(arquivo);

    return 0;    
}