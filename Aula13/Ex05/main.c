#include <stdio.h>

int main (void) {
    FILE *vendas.txt;
    vendas.txt = fopen("vendas.txt", "r");
    if (vendas.txt == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    char quantidadeDeVendas = 0;
    float valorVenda = 0;
    float totalVendido = 0;
    float maiorValorRegistrado = 0;

    fscanf(vendas.txt, "%s %f", quantidadeDeVendas, &valorVenda);
    while (fscanf(vendas.txt, "%11s %f", quantidadeDeVendas, &valorVenda) == 2) {
        printf("Quantidade de vendas: %s, Valor da venda: R$%.2f\n", quantidadeDeVendas, valorVenda);
        totalVendido += valorVenda;
        quantidadeDeVendas++;
        if (valorVenda > maiorValorRegistrado) {
            maiorValorRegistrado = valorVenda;
        }
    }

    printf("Quantidade de vendas: %d\n", quantidadeDeVendas);
    printf("Total vendido: R$%.2f\n", totalVendido);
    printf("Maior valor registrado: R$%.2f\n", maiorValorRegistrado);

    return 0;
}