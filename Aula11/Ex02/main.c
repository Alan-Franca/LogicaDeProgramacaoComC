#include <stdio.h>

int main(void) {
    int pontos[5];
    int i, j, aux;

    for (i = 0; i < 5; i++){
        scanf("%d", &pontos[i]);
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5 ; j++) {
            if (pontos[j] > pontos[j - 1]) {
                aux = pontos[j];
                pontos[j] = pontos[j - 1];
                pontos[j - 1] = aux;
            }
        }
    }
    printf("Pontuacoes: \n");
        for (i = 0; i < 5; i++) {
            printf("%d ", pontos[i]);
            
        }
    printf("\n");
    return 0;
}