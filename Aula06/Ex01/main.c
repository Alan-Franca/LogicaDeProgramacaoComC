#include <stdio.h>

int main () {
    float salarioBase = 0;
    float salarioMensal = 0;
    
    printf("Digite o seu salario: \n");
    scanf("%f", &salarioBase);
    if salarioBase < 5000: {
        salarioMensal = salarioBase+((salarioBase/100)*25); // salarioBase*1.25
    } else {
        salarioMensal = salarioBase;
    }

    printf("Salario Mensal: R$%.2f", salarioMensal);

    return 0;
}