#include <stdio.h>

int main(){
  int numero;
  

  printf("Entre com o primiero numero: ");
  int deu_certo = scanf("%i", &numero);

  printf(" Entre com o segundo numero:");
  int certo =  scanf("%i", &numero);

  int maior_que_0_e_menor_que_10 = numero > 0 && numero < 10;
  printf("O numero esta entre 0 e 10? %i\n", maior_que_0_e_menor_que_10);

  int menor_que_0_ou_maior_que_10 = numero < 0 || numero > 10;
  printf("O numero esta entre 0 e 10? %i\n", menor_que_0_ou_maior_que_10);

  int nao_maior_que_0 = !(numero > 0); // numero < 0
  printf("O numero nao eh maior que 0? %i\n", nao_maior_que_0);
  

  return 0;
}