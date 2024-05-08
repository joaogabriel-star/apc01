#include <stdio.h>

int main() {
  char opcao;

  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar saldo\n");
  printf("2 - Recarregar\n");
  printf("3- listar recados\n ");
  printf("4 - ligaçoes feitas\n");
  printf(" entre com uma opçao => ");
  int leu_certo = scanf("%c", &opcao);

  switch (opcao) {
  case '1':
    printf("Seu saldo é R$10.00zn");
    break;
  case '2': {
    float valor;
    printf("Entre com o valor da recarga: ");
    leu_certo = scanf("%f", &valor);
    break;
  }
  case '3':
    printf("Você não tem recados\n");
    break;
  case '4':
    printf("6199999999\n");
    printf("6199999999\n");
    printf("6199999999\n");
    break;
  case '0':
    printf("até logo\n");
    break;
  defaut:
    printf("opção invalida, tente novamente!\n");
  }

  return 0;
}