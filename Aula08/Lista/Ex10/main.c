#include <stdio.h>

int main(){
   int N;
   pintf("Digite um número inteiro positivo seu bobo alegre: ");
   scanf("%d", &N);
   for(int i =1; i <= N; i++){
        printf("%d\n", 2*i - 1);
   }
   return 0;
}