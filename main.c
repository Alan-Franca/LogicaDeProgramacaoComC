int main (){
    int perimetro = 0;
    float h = 0;
    float cons = 10.55;
    cons = (perimetro * h * 30) / 1000;

    printf("Potencia do equipamento (W) \n: ");
    scanf(" %d", &perimetro);
    printf("Horas de uso por dia \n: ");
    scanf(" %f", &h);

    printf("Consumo mensal: %2f \n", cons);

    return 0;
}