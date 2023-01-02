#include <stdio.h>
/*Um determinado material radioativo perde metade de sua
massa a cada 50 segundos. Dada a massa inicial, em gramas, fazer um
programa em C que calcule o tempo necessário para que essa massa se torne
menor que 0,5 grama. O programa em C deve escrever a massa inicial, a massa
final e o tempo calculado em horas, minutos e segundos.*/
int main(){
    int tempo_total;
    int tempo_hora;
    int tempo_minutos;
    int tempo_segundos;
    float massa_inicial;
    float massa_final;

    printf("Massa Inicial em Gramas: ");
    scanf("%f", &massa_inicial);

    massa_final = massa_inicial;
    tempo_total = 0;
    while (massa_final >= 0.5) {
        massa_final = massa_final / 2;
        tempo_total = tempo_total + 50;
  }
    printf("\nMassa Inicial: %2.2f gramas.\n", massa_inicial);
    printf("Massa Final: %2.2f gramas.\n", massa_final);
    printf("Tempo Total: %d segundos.\n", tempo_total);
    tempo_hora = (tempo_total / 3600);
    tempo_minutos = (tempo_total % 3600) / 60;
    tempo_segundos = (tempo_total % 3600) % 60;
    printf("Tempo Calculado em horas: %d horas.", tempo_hora);
    printf("\nTempo Calculado em minutos: %d minutos.", tempo_minutos);
    printf("\nTempo Calculado em segundos: %d segundos.", tempo_segundos);
    return 0;
}