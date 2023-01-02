#include <stdio.h>
/*Calcular os valore de x e y onde a seguinte expressão
xy - x2 + y tem valor máximo, a partir dos números naturais n e m tais que
x < m e y < n.*/
int main(){
    int n, m;         
    int x, y;         
    int valor;        
    int maximo_de_x;
    int maximo_de_y;   
    int valor_maximo;     

    printf("Digite n: ");
    scanf ("%d", &n);
    printf("Digite m: ");
    scanf("%d", &m);
    maximo_de_x = maximo_de_y = 0;
    valor_maximo = 0;  

    for (x = 0; x <= n; x++){
        for (y = 0; y <= m; y++) 
        {
            valor = x*y - x*x + y;
            if (valor > valor_maximo){
                valor_maximo = valor;
                maximo_de_x = x;
                maximo_de_y = y;
            }
        }  
        }
    
    printf("Valor maximo da expressao e:%d",valor_maximo);
    printf("\nOnde o valor de x foi de: %d", maximo_de_x);
    printf("\nOnde o valor de y foi de: %d", maximo_de_y);
    return 0;
}