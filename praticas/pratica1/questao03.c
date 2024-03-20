//3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.//
#include <stdio.h>

int main() {
  const float PI = 3.1416;
  int raio;
  float perimetro;

  perimetro = 2 * PI * raio;
  
  printf("Qual valor do raio? ");
  int deu_certo = scanf("%i", &raio);
  printf("O perimetro da pizza é: %f\n", perimetro);

  return 0;
}