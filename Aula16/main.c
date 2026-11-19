#include <stdio.h>

int main() {
    FILE *f1, *f2, *f3;

    int rgm1, rgm2;
    float nota1, nota2;

    f1 = fopen("Notas1.txt", "r");
    f2 = fopen("Notas2.txt", "r");
    f3 = fopen("Notas3.txt", "w");

    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }
    int l1 = fscanf(f1, "%d %f", &rgm1, &nota1);
    int l2 = fscanf(f2, "%d %f", &rgm2, &nota2);
    while (l1 == 2 && l2 == 2) {
        if (rgm1 < rgm2) {
            fprintf(f3, "%d %.1f\n", rgm1, nota1);
            l1 = fscanf(f1, "%d %f", &rgm1, &nota1);
        }
        else if (rgm2 < rgm1) {
            fprintf(f3, "%d %.1f\n", rgm2, nota2);
            l2 = fscanf(f2, "%d %f", &rgm2, &nota2);
        }
        else {
            float maiorNota = (nota1 > nota2) ? nota1 : nota2;
            fprintf(f3, "%d %.1f\n", rgm1, maiorNota);

            l1 = fscanf(f1, "%d %f", &rgm1, &nota1);
            l2 = fscanf(f2, "%d %f", &rgm2, &nota2);
        }
    }
    while (l1 == 2) {
        fprintf(f3, "%d %.1f\n", rgm1, nota1);
        l1 = fscanf(f1, "%d %f", &rgm1, &nota1);
    }
    while (l2 == 2) {
        fprintf(f3, "%d %.1f\n", rgm2, nota2);
        l2 = fscanf(f2, "%d %f", &rgm2, &nota2);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    printf("Arquivo Notas3 gerado com sucesso!\n");

    return 0;
}