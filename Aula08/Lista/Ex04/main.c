#include <stdio.h>

int main(){
    int num, i;
    printf("Digite um numero positivo seu animal: ");
    scanf("%d", &num);
    if(num < 0) {
        printf("Numero invalido, mongol, digite um numero positivo.\n");
    } else {
        printf("Tabuada de %d:\n", num);
        for(i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }
    }
    return 0;
}
