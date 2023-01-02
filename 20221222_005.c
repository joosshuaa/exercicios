#include <stdio.h>
/*Faça um programa em C que calcula e escreve a seguinte
soma: soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50*/

int main(void){
    int i;
    int j;
    float soma;

    i = 1;
    soma = 0;

    for(j=1; j<=50; j++){
    soma = soma+ (float)i/j; 
    i = i + 2;

    printf("%f",soma);
    getchar();
    getchar();
}
    return 0;
}