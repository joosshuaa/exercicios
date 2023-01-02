#include <stdio.h>
/*Dado um número n inteiro e positivo, dizemos que n é perfeito
se n for igual à soma de seus divisores positivos diferentes de n. Construa um
programa em C que verifique se um dado número é perfeito. Ex: 6 é perfeito,
pois 1+2+3 = 6.*/
int main(){
    int soma = 0;
    int dobro;
    int n;
    int i;

    printf("Digite um numero: ");
    scanf("%d",&n); 

    dobro = 2*n;

    for (i=1;i<=n;i++){  

    if(n % i == 0){
        soma = soma+i;
   }

}
    if(soma==dobro)
        printf("\nE um numero perfeito: %d",n);
    else
        printf ("\nNao e um numero perfeito: %d",n);
    return 0;
}