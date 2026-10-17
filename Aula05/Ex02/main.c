#include <stdio.h>

int main () {
    int medidaPes = 0;
    int polegada = medidaPes*12; 
    int jardas = medidaPes/3;
    int milhas = jardas*1760;

    printf("Digite a medida em pes(Ain pack do pe): ");
    scanf("%d", &medidaPes);

    printf("Medida em polegadas: %d\n", polegada);
    printf("Medida em jardas: %d\n", jardas);
    printf("Medida em milhas: %d\n", milhas);

    return 0;
}