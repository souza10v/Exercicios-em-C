// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>
int main()
{
    float precoatual,vendas,novopreco;   
    printf("Insira o preço atual: ");
    scanf("%f", &precoatual);
    printf("Insira as vendas: ");
    scanf("%f", &vendas);
    if (vendas<500){
        if (precoatual<30){
            novopreco=precoatual*1.1;
        }
        else{
            novopreco=precoatual;
        }
    }
    else if (vendas >=500 && vendas < 1200){
        if (precoatual >= 30 && precoatual < 80 ){
            novopreco=precoatual*1.15;
        }
        else{
            novopreco=precoatual;
        }
    }
    else if (vendas >= 1200){
        if (precoatual >= 80){
            novopreco=precoatual*0.8;
        }
        else{
            novopreco=precoatual;
        }
    }
    printf("O preço antigo é R$ %.2f e o novo preço é R$ %.2f.", precoatual,novopreco);
    return 0;
}