// Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a). // 


#include <stdio.h>
#include <math.h>

int main() {
  float a;
  float b;
  float c;
  float delta;

  printf("Qual o valor de a?");
  int deu_certo = scanf("%f", &a);

  printf("Qual valor de b?");
  deu_certo = scanf("%f", &b);

  printf("Qual valor de c?");
  deu_certo = scanf ("%f", &c);

  delta = b * b - 4 * a * c;
  printf(" o Valor de delta é %f\n" , delta);

  double raiz1 = (-b + sqrt(delta)) / (2 * a);
  double raiz2 = (-b - sqrt(delta)) / ( 2 * a);

  printf(" Qual valor da raiz 1 %f\n", raiz1);
  printf(" Qual valor da raiz 2 %f\n", raiz2);


  return 0;
}