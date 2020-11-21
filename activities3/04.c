// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdio.h>

int main() {
    int prato,sobremesa,bebida;
    float calorias;
    printf("Escolha o prato abaixo:\n ");
    printf("1 Salada; \n ");
    printf("2 Peixe;\n ");
    printf("3 Frango;\n ");
    printf("4 Carne.\n ");
    scanf("%d",&prato);
    printf("Escolha a sobremesa abaixo:\n ");
    printf("1 Abacaxi; \n ");
    printf("2 Sorvete;\n ");
    printf("3 Mousse;\n ");
    printf("4 Bolo.\n ");
    scanf("%d",&sobremesa);
    printf("Escolha a bebida abaixo:\n ");
    printf("1 Chá; \n ");
    printf("2 Suco;\n ");
    printf("3 Refrigerante;\n ");
    printf("4 Cereveja.\n ");
    scanf("%d",&bebida);
    
    if (prato==1 ){
        calorias=180;
    }
    else if (prato==2 ){
        calorias=230;
    }
    else if (prato==3 ){
        calorias=250;
    }
    else if (prato==4 ){
        calorias=350;
    }
    
    if (sobremesa==1 ){
        calorias=calorias+75;
    }
    else if (sobremesa==2 ){
        calorias=calorias+110;
    }
    else if (sobremesa==3 ){
        calorias=calorias+170;
    }
    else if (sobremesa==4 ){
        calorias=calorias+200;
    }
    
    if (bebida==1 ){
        calorias=calorias+20;
    }
    else if (bebida==2 ){
        calorias=calorias+70;
    }
    else if (bebida==3 ){
        calorias=calorias+100;
    }
    else if (bebida==4 ){
        calorias=calorias+50;
    }
    
    printf("A quantidade de calorias é %.2f.",calorias);

}