#include <stdio.h>

int main () {
    float valorTotalDeVenda = 0;    
    float valorDeComissao = 0;
    float valorDeBonus = 0;

    printf("Digite o seu valor total de vendas: \n");
    scanf("%f", &valorTotalDeVenda);

    if (valorTotalDeVenda >= 50000) {
        valorDeBonus = (valorTotalDeVenda/100)*2.5; // valorTotalDeVenda*1.025
        valorDeComissao = (valorTotalDeVenda/100)*5.0; // valorDeComissao*1.05
    } else {
        valorDeBonus = (valorTotalDeVenda/100)*1.5; // valorTotalDeVenda*1.015
        valorDeComissao = (valorTotalDeVenda/100)*3.0; // valorDeComissao*1.03
    }
    
    printf("Valor de Bonus: R$%.2f\n", valorDeBonus);
    printf("Valor de Comissao: R$%.2f\n", valorDeComissao);

    return 0;
}