#include <stdio.h>

int main(){
  int numero1;
  int numero2;

  printf("Entre com o primiero numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf(" Entre com o segundo numero:");
  int certo = scanf("%i", &numero2);

  int sao_iguais = numero1 == numero2;
  printf("Os numero sao iguais? %i\n", sao_iguais);

  int sao_diferentes = numero1 != numero2;
  printf("os numeros sao diferentes? %i\n", sao_diferentes);

  int eh_maior = numero1 > numero2;
  printf("o primeiro eh maior que o segundo? %i\n", eh_maior);

  int eh_menor = numero1 < numero2;
  printf("o primeiro numero é menor? %i\n", eh_menor);

  int eh_maior_ou_igual = numero1 >= numero2;
  printf("o primeiro é maior ou igual? %i\n", eh_maior_ou_igual);

  int eh_menor_ou_igual = numero1 <= numero2;
  printf("o primeiro é menor ou igual? %i\n", eh_menor_ou_igual);

  
  return 0;
}