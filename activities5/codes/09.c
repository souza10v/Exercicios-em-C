// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int conta[10000],i,totalnegativos,totalclientes;
    float saldo[10000],saldototal;;
    char nome[10000];
    
    i=1;
    totalnegativos=0;
    
    printf("Insira o número da conta: ");
    scanf("%d",&conta[i]);
    totalclientes=1;
    
    printf("Insira o nome: ");
    scanf("%s",&nome[i]);
        
    printf("Insira o saldo: ");
    scanf("%f",&saldo[i]);
    
    if(saldo[i]<0){
        totalnegativos=totalnegativos+1;
        }
    saldototal=saldo[i];
    
    while (conta[i]!=-999 && conta[i]!=10000){
        i=i+1;
        
        printf("Insira o número da conta: ");
        scanf("%d",&conta[i]);
    
        printf("Insira o nome: ");
        scanf("%s",&nome[i]);
        
        printf("Insira o saldo: ");
        scanf("%f",&saldo[i]);
        
        if(saldo[i]<0){
            totalnegativos=totalnegativos+1;
        }
        saldototal=saldototal+saldo[i];
        totalclientes=totalclientes+1;
    }
    
    printf(" O total de clientes com saldo negativo é %d.",totalnegativos);
    printf("\n O total de clientes da agencia é %d.",totalclientes);
    printf("\n O saldo total da agencia é %f.",saldototal);
    return 0;
}
  