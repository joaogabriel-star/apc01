/*3. Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.*/

#include <stdio.h>

int main() {
  int nota;

  printf("Entre com a nota:");
  int deu_certo = scanf("%i", &nota);

  switch (nota) {
    case 1: printf("A nota foi ruim\n"); break;
    case 2: printf("A nota foi insuficiente\n"); break;
    case 3: printf("A nota foi suficiente\n"); break;
    case 4: printf("A nota foi boa\n"); break;
    case 5: printf("A nota foi otimo\n"); break;
  }

  
  return 0;
}