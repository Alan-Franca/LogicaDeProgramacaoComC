int main() {
    FILE *notas01;
    notas01 = fopen("notas01.txt", "a");
    FILE *notas02;
    notas02 = fopen("notas02.txt", "a");

    if (notas01 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    if (notas02 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fclose(notas01);
    fclose(notas02);
    return 0;
}