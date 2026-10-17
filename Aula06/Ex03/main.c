#include <stdio.h>

int main () {
    int tempoDeTrabalho = 0;
    float salario = 0;
    float valorDeBonus;

    printf("Digite o tempo em anos de empresa: \n");
    scanf("%d", tempoDeTrabalho);
    printf("Digite o valor do seu salario: \n");
    scanf("%f", &salario);

    if (tempoDeTrabalho >= 5) {
        valorDeBonus = (salario/100)*20; // salario*1.20
    } else {
        valorDeBonus = (salario/100)*10; // salario*1.10
    }
    
    printf("Valor do bonus: %.2f", valorDeBonus);

    return 0;
}