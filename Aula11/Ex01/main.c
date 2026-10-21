#include <stdio.h>

int main(void) {
    int precos[6];
    int i, j, aux;

    for (i = 0; i < 6; i++){
        scanf("%d", &precos[i]);
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (precos[j] < precos[j + 1]) {
                aux = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = aux;
            }
        }
    }
    printf("Precos ordenados: \n");
    for (i = 0; i < 6; i++) {
        printf("%d ", precos[j]);
            
    }
    printf("\n");
    return 0;
}