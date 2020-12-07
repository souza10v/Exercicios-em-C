// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float ladoa,ladob,altura,areapiso,areaparede,cparede,cpiso;
    int tpiso,ttinta;
    char categoria,t2;
    
    printf("Insira o lado A: ");
    scanf("%f", &ladoa);
    
    printf("Insira o lado B: ");
    scanf("%f", &ladob);
    
    printf("Insira a altura: ");
    scanf("%f", &altura);
    
    printf("Escolha o tipo de piso:\n ");
    printf("1 - R$ 24,00/m2; \n ");
    printf("2 - R$ 31,00/m2;\n ");
    printf("3 - R$ 55,00/m2;\n");
    scanf("%d", &tpiso);
    
    printf("Escolha o tipo de tinta:\n ");
    printf("1 - R$ 22,00/m2; \n ");
    printf("2 - R$ 47,00/m2;\n ");
    scanf("%d", &ttinta);
    
    areapiso=ladoa*ladob;
    areaparede=2*ladoa*altura+2*ladob*altura;
    
    if (tpiso == 1){
        cpiso=areapiso*24;
    }
    else if(tpiso==2){
        cpiso=areapiso*31;  
    }
    else if (tpiso==3){
        cpiso=areapiso*55;
    }
    
    if (ttinta==1 ){
        cparede=areaparede/2*22;
    }
    else if (ttinta==2 ){
        cparede=areaparede/2*47;
    }

    printf("\n O custo para piso é R$ %.2f",cpiso);
    printf("\n O custo para parede é R$ %.2f",cparede);
}