#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia vários inteiros positivos e mostre,
no final, a soma dos números pares e a soma dos números ímpares. O
programa para quando entrar um número maior que 1000.*/
int main(){
    int i; 
    int soma_impar = 0;
    int soma_par = 0;

    for(i =1; i <=1001; i++)
        if(i % 2 == 1) 
            soma_impar += i; 
        else {  
            i % 2 == 0;
            soma_par += i;
        }
    printf("\nSoma dos pares de 1 a 1000: %d", soma_par);
    printf("\nSoma dos impares de 1 a 1000: %d\n\n", soma_impar);

    return 0;
}