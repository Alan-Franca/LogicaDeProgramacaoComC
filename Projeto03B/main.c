#include <stdio.h>
#include <math.h>

int main() {
	float largura;
	float comprimento;
	float valorCaixas;
	float area;
	
	printf("Qual e a largura da area em metros?: ");
	scanf("%f", &largura);
	printf("Qual e o comprimento da area em metros?: ");
	scanf("%f", &comprimento);
	printf("Qual e o valor de cada caixa?: ");
	scanf("%f", &valorCaixas);
	
	area = largura*comprimento;
	double totalCaixas = ceil(area/2.5);
	printf("Area total a ser revestida: %.2f m2 \n", area);
	printf("Quantidade de caixas necessarias: %0.f \n", totalCaixas);
	printf("Custo total da compra: R$ %.2f \n", (area/2.5)*valorCaixas);
	
	return 0;
}