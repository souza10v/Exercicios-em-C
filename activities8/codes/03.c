// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>

int idadeatual(int dian,int mesn, int anon,int diaa,int mesa,int anoa){
    int anos, meses, dias;
    if(mesn>mesa){
        anos=anoa-anon-1;
        meses=mesa+(12-mesn);
        if(dian<=diaa){
            dias=diaa-dian;
        }
        else{
            dias=30-dian+diaa;
        }
    }
    else{
        anos=anoa-anon;
        meses=mesa-mesn;
        if(dian<=diaa){
            dias=diaa-dian;
        }
        else{
            dias=30-dian+diaa;
        }
    }

    printf("\n%d anos %d meses e %d dias.",anos,meses,dias);
    
}

int main() {
    int dian,mesn,anon,diaa,mesa,anoa;
    
    printf("Insira o dia de nascimento: ");
    scanf("%d",&dian);
    printf("Insira o mês de nascimento: ");
    scanf("%d",&mesn);
    printf("Insira o ano de nascimento: ");
    scanf("%d",&anon);
    printf("\nInsira o dia de hoje: ");
    scanf("%d",&diaa);
    printf("Insira o mês atual: ");
    scanf("%d",&mesa);
    printf("Insira o ano atual: ");
    scanf("%d",&anoa);
    
    idadeatual(dian,mesn,anon,diaa,mesa,anoa);
    
    return 0;
}
  