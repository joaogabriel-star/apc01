#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao;

  do {
    int deu_certo = system("clear");
    printf("Menu jogo\n");
    printf("1. iniciar\n");
    printf("2. Resultado\n");
    printf("3. ajuda \n");
    printf("4. sair \n");
    printf("Escolha a opção --> \n");
    deu_certo = scanf("%i", &opcao);
    if(!deu_certo) opcao = 0;
  
    while (getchar() != '\n')
      ; // limpar o buffer do teclado

    switch (opcao) {

    case 1: {
      deu_certo = system("clear");
      char nome[31];
      printf("Nome do jogador: ");
      deu_certo = scanf("%[^\n]s", nome);
      while (getchar() != '\n');
      printf("ola %s\n", nome);
      printf("Pressione ENTER p/inciar");
      getchar();
      break;
    }
    case 2:{
      deu_certo = system("clear");
      printf("Resultado\n");
      printf(" 1o lugar - Gabriel - 1000\n");
      printf(" 2o lugar - Dani - 100\n");
      printf(" 3o lugar - iuri - 500\n");
      printf(" 4o lugar - Joao - 1000\n");
      printf(" 5o lugar - Emanuel - 1500\n");
      printf(" Pressione ENTER P/voltar");
      getchar();
      
      break;}
    case 3:
      break;
    case 4:
      break;
    default:

      printf(" Opção invalida! Pressione ENTER P/ continuar");
      getchar();
    }
  } while (opcao != 4);
  return 0;
}