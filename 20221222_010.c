#include <stdio.h>
/*Um número na forma n3 é igual à soma de n ímpares
consecutivos. Por exemplo.
33=27, 33=7+9+11
Dado um número p, determine os ímpares consecutivos cuja soma é igual a
n3 para n assumindo valores de 1 a p.*/
int main(){
    int n;
    int p;
    int i;
    int j;
    int soma;

  printf("Digite o valor de p: ");
  scanf("%d", &p);

  for (n = 1; n <= p; n++) {
    soma = 0;
    for (j = 1; soma != n * n * n; j = j + 2) {
      soma = 0;
      for (i = 0; i < n; i++)
	      soma = soma +j + 2 * i;
    }
    j = j - 2;
    printf("%d*%d*%d = %d", n, n, n, j);
    for (i = 1; i < n; i++)
      printf("+%d", j+2*i);
    printf("\n"); 
  }
    return 0;
}