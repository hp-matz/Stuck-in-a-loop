#include<stdio.h>
#include <unistd.h>

#define ESCOLHABOOL "\ndigite:\n\n\t'S' - para sim\t 'N' para não\n\n\tFaça sua escolha: "

int main(void)
{
  char name[20];
  char boolean;
  void escolhaBool(void);
  int i=0;
  
  printf("Entre com seu nome: ");
  scanf("%s",name);
  
  printf("Seja bem vindo ao jogo Stuck-in-a-loop, esse jogo é do tipo de escolha. E lembre-se ''O simples bater de asas de uma borboleta no Brasil pode ocasionar um tornado no Texas''\n");

  printf("\n ~%s alguem está te ligando o que você deseja fazer?", name);

  printf("\n\tAtender telefone?\n ");

  scanf("%s", &boolean);

  switch( boolean ) {
    case 'S':
      printf("\nVocê atendeu o telefone\n");
      printf("Você tem 7 dias\n 7 dias? Acho que era engano, enfim continundo...");

    break;
    case 'N':
      printf("\nVocê escolheu não atender o telefone e agora nunca mais saberá quem era ou oque a pessoal queria...\n");
    break;
    default:
      printf("\nOpção inválida\n");
  }

  return 0;
}