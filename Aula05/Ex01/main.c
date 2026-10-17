#include <stdio.h>

int main () {
    float inicialDistance = 0;
    float finalDistance = 0;
    float inicitalTime = 0;
    float finalTime = 0;
    float dx = finalDistance - inicialDistance;
    float dt = finalTime - inicitalTime;
    float velocidadeMedia = dx/dt;

    printf("Digite a distancia inicial em metros: ");
    scanf("%f\n", &inicialDistance);
    printf("Digite a distancia final em metros: ");
    scanf("%f\n", &finalDistance);
    printf("Digite o tempo inicial em minutos: ");
    scanf("%f\n", &inicitalTime);
    printf("Digite o tempo final em minutos: ");
    scanf("%f\n", &finalTime);

    printf("Distancia percorrida: %f\n", dx);
    printf("Tempo decorrido: %f\n", dt);
    printf("Velocidade media: %f\n", velocidadeMedia);

    return 0;
}