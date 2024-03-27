#include <stdio.h>
#include <math.h>


int main(){
  int numero1;
  int numero2;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo numero: ");
  int certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma dos numero é %i\n" , soma);

  int subtração = numero1 - numero2;
  printf("A subtração dos numero é %i\n" , subtração);

  int multiplicação = numero1 *  numero2;
  printf("A multiplicação dos numero é %i\n" , multiplicação);

  int divisao = 1.0f * numero1 /  numero2; //CONVERSAO MULTIPLICATIVA
  printf("A divisao dos numero é %i\n" , divisao);
  
  int resto = numero1 % numero2;
  printf("O resto da divisao dos números é %i\n", resto);

  // numero1 = numero1 + 1;
  // incremento
  printf("O incremento do numero1 é %i\n", numero1++);
  printf("O incremento do numero1 é %i\n", ++numero1);

  // numero1 = numero1 - 1;
  // incremento
  printf("O decremento do numero1 é %i\n", numero1--);
  printf("O decremento do numero1 é %i\n", --numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("A raiz quadrada do numero1 é %f\n", raiz_quadrada);

  double potencia = pow(numero1, 4); // numero1^4
  printf("A quarta potencia do primeiro numero é %f\n", potencia);

  double logaritimo2 = log2(numero1);
  printf("O logaritmo do primeiro numero na base 2 é %f\n", logaritimo2);

  const double PI = 3.1416;
  double seno = sin(numero1 * PI / 120); //angulo em radiano * PI/180
  printf("O seno do priemiro numero é %f\n", seno);

  
  return 0;
}
