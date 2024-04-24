// Faça um programa em C que determine se um número inteiro lido é par ou ímpar.

#include <stdio.h>

int main() {
  int numero;

  printf("Entre com o numero inteiro: ");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo) {

    int numero_eh_divisivel_por_2 = numero % 2 == 0;

    if (numero_eh_divisivel_por_2) {
      printf("O numero %i é par!\n", numero);
    } else {
      printf("O numero %i é impar!\n", numero);
    }
  } else {
    printf("O numero lido não é inteiro!\n");
  }

  return 0;
}