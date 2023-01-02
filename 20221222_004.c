#include <stdio.h>
/*Dado um número identificar se é um número primo. (Um
número primo é aquele que é dividido apenas por um e por ele mesmo.)*/
int main(){
    int numero;
    int i;
    int resultado;

    printf("digite um numero: ");
    scanf("%d", &numero);
    for (i = 2; i <= numero / 2; i++) {
    if (numero % i == 0) {
       resultado++;
       break;
    }
 }
    if (resultado == 0)
        printf("E um numero primo: %d\n", numero);
    else
        printf("Nao e um numero primo\n", numero);

    return 0;
}