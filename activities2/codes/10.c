// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
  int i;
  float conta,n1,n2,n3,inverso,multiplicador;
  printf("Insira o número da conta: ");
  scanf("%f", &conta);
  
  n1=floor(conta/100);
  n2=floor((conta-n1*100)/10);
  n3=floor((conta-(n1*100)-(n2*10)));
  
  inverso=n3*100+n2*10+n1;
  
  n1=floor(inverso/100);
  n2=floor((inverso-n1*100)/10);
  n3=floor((inverso-(n1*100)-(n2*10)));
  
  multiplicador=n1*1+n2*2+n3*3;
  
  n1=floor(inverso/10);
  n2=floor((inverso-(n1*10)));

  printf("O digito verificador é : %.0f ", n2);

  return 0;
}