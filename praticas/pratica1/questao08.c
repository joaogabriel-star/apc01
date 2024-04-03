//8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).//

#include <stdio.h>

int main(){
  int segundos;

  printf("Qual valor em segundos?");
  int deu_certo = scanf("%i", &segundos);
  int horas = segundos / 3600;
  int minutos = (segundos % 3600) / 60;

  printf("Qual ")
  return 0;
}