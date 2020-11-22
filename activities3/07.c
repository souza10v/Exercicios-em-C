// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float preco,precoc, imposto, npreco;
    char type;
    char refrigeracao, type2;
    
    
    printf("Insira o valor: ");
    scanf("%f", &preco);
    
    printf("Escolha o Tipo:\n ");
    printf("A - Alimentação; \n ");
    printf("L - Limpeza;\n ");
    printf("V - Vestuário;\n");
    scanf(" %s", &type2);
    
    printf("Escolha a refrigeração:\n ");
    printf("S - Refrigeração; \n ");
    printf("N - Não refrigeração;\n ");
    scanf(" %s", &refrigeracao);

    precoc=0;
    if (refrigeracao=='N'){

        if (type2=='A'){
            if (preco<15){
                precoc=(preco+2);
            }
            else{
                precoc=(preco+5);
            }
        }
        if (type2=='L'){
            if (preco<10){
                precoc=preco+1;
            }
            else{
                precoc=preco+2.5;
            }
        }
        if (type2=='V'){
            if (preco<30){
                precoc=preco+3;
            }
            else{
                precoc=preco+2.5;
            }
        }
    }
    else if (refrigeracao=='S'){
        if (type2=='A'){
            precoc=preco+8; 
        }
        else if (type2=='B'){
            precoc=preco+0;
        }
        else{
            precoc=preco+0;
        }
    }
    
    if (preco<25){
        imposto=precoc*0.05;
    }
    else{
        imposto=precoc*0.08;
    }
    if (type2 =='A' && refrigeracao == 'N'){
        npreco=preco+imposto;
    }
    else{
        npreco=(preco+imposto)*0.97;
    }
    
    printf("\n Preço do produto R$%.2f",precoc);
    printf("\n Impostos do produto R$%.2f",imposto);
    printf("\n Preço após desconto R$%.2f",npreco);
    
    if(npreco<50){
        printf("\n Preço barato.");
    }
    else if (npreco>=50 && npreco<=100){
        printf("\n Preço normal");
    }
    else {
        printf("\n Preço caro.");
        
    }
}