#include <stdio.h>
//Escreva um programa em C que lê 15 valores reais, encontra
//o maior e o menor deles e mostra o resultado.
int main(){
    int numero, maior,menor; 
    int i; 
 
    printf("Digite um numero real: "); 
    scanf("%i", &numero); 
    maior = numero; 
    menor = numero; 
    for(i=1; i<15; i++) { 
        printf("Digite um numero real: ",i+1); 
        scanf("%i", &numero);
 
    if(numero>maior) 
        maior=numero; 
    else 
    if(numero<menor) 
        menor=numero; 
    } 
    printf("\nNumero maior: %d", maior); 
    printf("\nNumero menor: %d", menor);
    return 0;
    }