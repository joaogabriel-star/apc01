/*4. Faça um programa em C que leia uma tecla pressionada e determine se ela é uma letra, um dígito ou um caractere especial.*/

#include <stdio.h>

int main() {
  char tecla;
  printf ("Pressione uma tecla: ");
  int deu_certo = scanf("%c", &tecla);

  if (tecla > 'a' && tecla <= 'z')
  if (tecla > 'A' && tecla <= 'Z');
  if (tecla > '0' && tecla <= '9');
  else {
    printf("É um caractere especial");
  }

  return 0;
}