#include <stdio.h>

int main (void) {
    FILE *notas.txt;
    notas.txt = fopen("notas.txt", "r");
    if (notas.txt == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    char rgm[12];
    char quantidadeDeAlunos = 0;
    float nota;
    float media = 0;
    float maiorNota = 0;
    int qtdDeAlunosAprovados = 0;

    fscanf(notas.txt, "%s %f", rgm, &nota);
    while (fscanf(notas.txt, "%11s %f", rgm, &nota) == 2) {
        maiorNota = (nota > maiorNota) ? nota : maiorNota;
        media += nota;
        printf("RGM: %s, Nota: %.2f\n", rgm, nota);
        quantidadeDeAlunos++;
        if (nota >= 6.0) {
            qtdDeAlunosAprovados++;
        }
    }

    media /= 10;
    printf("Estudantes: %d\n", qtdDeAlunosAprovados);
    printf("Maior nota: %.2f\n", maiorNota);
    printf("Média: %.2f\n", media);
    printf("Quantidade de alunos: %d\n", quantidadeDeAlunos);

    return 0;
}