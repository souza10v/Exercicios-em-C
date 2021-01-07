// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>

int reajuste(float precoantigo,float preconovo){
    float novop;
    novop=((preconovo/precoantigo)-1)*100;
    return novop;
}

int main(void) {
    float precoantigo,preconovo,novopreco;
    printf("\n Insira o preço antigo: ");
    scanf("%f",&precoantigo);
    printf("\n Insira o preço novo: ");
    scanf("%f",&preconovo);
    novopreco=reajuste(precoantigo,preconovo);
    if(novopreco>0){
        printf("\n Acrescimento de %.2f %% .",novopreco);
    }
    else{
        printf("\n Descréscimo de %.2f %% .",novopreco);
    }
    return 0;
}
  