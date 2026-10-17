#include <stdio.h>

int main () {
    int idade = 0;
    float salarioBruto = 0;
    float salarioReajustado = salarioBruto+((salarioBruto/100)*38); //salarioBruto*1.38
    float salarioComBonus = salarioReajustado+((salarioBruto/100)*20); //salarioBruto*1.20
    float salarioLiquido = salarioComBonus-((salarioBruto/100)*15); //salarioBruto*0.85

    printf("Digite sua idade: \n");
    if idade <= 0 {
        printf("Idade invalida!! Digite novamente imbecil: \n");
    } else {
        scanf("%d", &idade);
    }
    printf("Digite seu salario bruto: \n");
    if salarioBruto <= 0 {
        printf("Salario invalido!! Digite novamente vagabunda: \n");
    } else {
        scanf("%f", &salarioBruto);
    }

    printf("Idade do funcionario: %d\n", idade);
    printf("Salario bruto: R$%.2f", salarioBruto);
    printf("Salario liquido: R$%.2f", salarioLiquido);

    return 0;
}