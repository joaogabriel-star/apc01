/* 8. Faça um programa em C que calcule o fatorial de um número inteiro. */

#include <stdio.h>

int main() {
  int numero;
  long int fatorial = 1;

  printf(" Calculo do fatorial (n!)\n\n");
  printf("Entre com o numero >= 0: ");
  int deu_certo = scanf("%i", &numero );
  int numero_valido = numero >= 0;

  if (deu_certo && numero_valido) {
    printf("%i! = ", numero);
    for(int i = numero; i >1; i--) {
      fatorial = fatorial * i;
      printf("%i X ", i); 
    }
    printf("1 = %li\n", fatorial);
  } else {
    printf("numero invalido\n");
  }

  return 0;
}