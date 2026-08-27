# include <stdio.h>

int main() {
    int potenciaWatts, horasConsumindo, totalDeConsumo;
    scanf("Potencia do equipamento em (w): %d", &potenciaWatts);
    scanf("Horas de uso por dia: %d", &horasConsumindo);
    totalDeConsumo = (potenciaWatts*horasConsumindo*30)/1000;
    printf("Consumo mensal: %d.2f hwh", totalDeConsumo);
    return 0;
}