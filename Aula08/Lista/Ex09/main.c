#include <stdio.h>

int main () {
    int i;

    printf("Aqui estao os multiplos de 3 de 1 a 100 seu animal: \n");

    for (i = 3; i <= 100; i += 3) {
        printf("%d\n", i);
    }

    return 0;
}