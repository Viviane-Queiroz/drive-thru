#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int mostraOpcoesDePagamento(){
    return 0;
}

int mostraOfertas(){
    return 0;
}
int selecionaMenu(number) {

 switch(number){
    case 1:
      selecionaLanche();
      break;
    case 2:
      mostraOpcoesDePagamento();
      break;
    case 3:
      mostraOfertas();
      break;
    default:
      printf("Voc� fechou o sistema");
      break;
  }

return 0;
}

int selecionaLanche()  {
    int codigoDoLanche;

    printf("Os c�digos das op��es de lache s�o: \n");
    printf("[1] - P�o de batata \n");
    printf("[2] - Hot dog vegetariano \n");
    printf("[3] - Coxinha de jaca \n");
    printf("[4] - Pastel de br�colis com queijo \n");
    printf("[5] - Pizza de 4 queijos \n");
    printf("Digite um dos c�digos: ");
    scanf("%i", &codigoDoLanche);

    return codigoDoLanche;
}

int main(void) {
  int number;


  printf("Digite uma das op��es entre [ ] \n");
  printf("Para ver o cardapio dia digite: [1] \n");
  printf("Para conferir as op��es de pagamento digite: [2] \n");
  printf("Para conferir a oferta do dia digite: [3] \n");
  printf("Digite uma das op��es: ");
  scanf("%i", &number);

  selecionaMenu(number);

}
