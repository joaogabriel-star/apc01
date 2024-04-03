// 7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
 #include <stdio.h>
#include <math.h>

int main(){
float angulo;
float distancia;
const float PI = 3.1416;

printf("Qual o angulo de inclinação do avião? ");
int deu_certo = scanf("%f", &angulo);

printf("Qual a distancia percorrida? ");
int certo = scanf("%f", &distancia);

float altura = sin(angulo * PI / 180) * distancia;
printf("A altura alcançada é %f\n", altura);

return 0;
}


