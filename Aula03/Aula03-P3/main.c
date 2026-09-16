# include <stdio.h>

int main() {
    int horas, minutos, totalCorrido;
    printf("Hora passadas: ");
    scanf("%d", &horas);
    printf("Minutos passados: ");
    scanf("%d", &minutos);
    totalCorrido = minutos + (horas*60);
    printf("Ja se passaram %d minutos desde o inicio do dia", totalCorrido);
    return 0;
}