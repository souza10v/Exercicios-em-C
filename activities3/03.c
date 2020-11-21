// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdio.h>

int main() {
  int idade;

  printf("Insira a sua idade em anos: ");
  scanf("%d",&idade);
  if (idade<=16){
      printf("Não Eleitor.");
  }
  else if (idade >= 18 && idade<=65){
      printf("Eleitor Obrigatório.");
  }
  else{
      printf("Eleitor Facultativo.");
  }

}
  