#include <stdio.h>
#include <math.h>
/*Fazer um programa para calcular a raiz quadrada de um
número positivo usando o roteiro abaixo (baseado no método de
aproximações sucessivas de Newton-Raphson).*/
int main(){
    int y;
    float x = 2;

    for (y=1; y<=10; y++){
        x = x - (x-cos(x))/ (1 + sin(x));
        printf("O valor de x%d = %f\n", y, x);   
    }
    printf("O valor da raiz quadrada de y e aproximadamente: %f", x);
    return 0;
    }

    

    