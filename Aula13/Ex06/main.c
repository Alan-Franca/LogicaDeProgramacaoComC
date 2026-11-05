#include <stdio.h>

int main (void) {
    FILE *energia.txt;
    energia.txt = fopen("energia.txt", "r");
    if (energia.txt == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char mes[12];
    float consumoEmKwh = 0;
    entrada = 0;
    
    printf("Cadastrar consumo: \n");
    printf("Exibir relatório: \n");
    printf("Sair: \n");
    scanf("%d", &entrada);

    while (entrada != 3) {
        switch (entrada) {
            case 1:
                printf("Digite o mês: ");
                scanf("%s", mes);
                printf("Digite o consumo em kWh: ");
                scanf("%f", &consumoEmKwh);
                fprintf(energia.txt, "%s %.2f\n", mes, consumoEmKwh);
                break;
            case 2:
                printf("Relatório de consumo:\n");
                rewind(energia.txt);
                while (fscanf(energia.txt, "%11s %f", mes, &consumoEmKwh) == 2) {
                    printf("Mês: %s, Consumo: %.2f kWh\n", mes, consumoEmKwh);
                }
                break;
            default:
                printf("Opção inválida.\n");
        }
        printf("Cadastrar consumo: \n");
        printf("Exibir relatório: \n");
        printf("Sair: \n");
        scanf("%d", &entrada);
    }

    fclose(energia.txt);
    return 0;
}