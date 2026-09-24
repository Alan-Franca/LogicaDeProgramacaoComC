#include <stdio.h>

int main (){
    int num, soma = 0;
   do{
        printf("Digite um numero inteiro ou o 0 pra picar a mula: ");
        scanf("%d", &num);
        soma += num;
    } while(num != 0);
    printf("A soma total dos valores lidos eh: %d\n", soma); 

    return 0;
}