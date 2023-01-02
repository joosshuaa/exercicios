#include <stdio.h>
#include <math.h>
#define True 1
#define False 0
/*A partir de um número inteiro positivo n. Determinar os
inteiros entre 1 e n que são comprimento da hipotenusa de um triângulo
retângulo com catetos inteiros.*/
int main(){
    int n;
    int cateto_a;
    int cateto_b;
    int hipotenusa;
    int resultado;

  printf("Digite o comprimento da hipotenusa: ");
  scanf("%d" , &n);

  for (hipotenusa = 1; hipotenusa <= n; hipotenusa++) {
    resultado = False;
    for (cateto_a = 1; cateto_a < hipotenusa && !resultado; cateto_a++) {
        cateto_b = cateto_a;
      while (cateto_a*cateto_a + cateto_b*cateto_b < hipotenusa*hipotenusa)
	    cateto_b++;
      if (cateto_a*cateto_a + cateto_b*cateto_b == hipotenusa*hipotenusa){
	    printf("\nhipotenusa: %d", hipotenusa);
        printf("\nCateto_a: %d", cateto_a);
        printf("\nCateto_b: %d", cateto_b);
	    resultado = True;
      }
    }
  }

    return 0;
}