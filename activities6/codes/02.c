// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>

int main() {
    float salario_minimo,salarioop[1000],totalpagamento,maiorsalario,mediah,mediam;
    int nope[1000],npecas[1000],pecastotal,nhomens,nmulheres,phomens,pmulheres,nmaior;
    int i;
    char continuar,sexoope[1000];
    
    printf("Insira o valor do salário mínimo: ");
    scanf("%f",&salario_minimo);
    
    printf("Inserir operario? [S/N] ");
    scanf("%s",&continuar);
    
    totalpagamento=0;
    pecastotal=0;
    nhomens=0;
    nmulheres=0;
    phomens=0;
    pmulheres=0;
    maiorsalario=0;
    
    if (continuar=='S'){
        i=1;
    }
    else{
        i=0;
    }

    while(i>0){
        printf("Insira o número do operário: ");
        scanf("%f",&nope[i]);
        printf("Insira o número de peças: ");
        scanf("%d",&npecas[i]);
        pecastotal=pecastotal+npecas[i];
        if (npecas[i]<=30){
            salarioop[i]=salario_minimo;
        }
        else if (npecas>30 && npecas<=50){
            salarioop[i]=salario_minimo+(npecas[i]-30)*(salario_minimo*0.03);
        }
        else{
            salarioop[i]=salario_minimo+(npecas[i]-30)*(salario_minimo*0.03);
        }
        totalpagamento=totalpagamento+salarioop[i];
        
        if(salarioop[i]>maiorsalario){
            maiorsalario=salarioop[i];
            nmaior=nope[i];
        }
        printf("Insira o sexo do operário: [M/F] ");
        scanf("%S",&sexoope[i]);
        if(sexoope[i]=='M'){
            nhomens=nhomens+1;
            phomens=phomens+npecas[i];
        }
        else{
            nmulheres=nmulheres+1;
            pmulheres=pmulheres+npecas[i];  
        }
        
        continuar=0;
        printf("Inserir operario? [S/N] ");
        scanf("%s",&continuar);
        
        if (continuar=='S'){
            i=1+i;
        }
        else{
            i=0;
        }
    }
    mediah=(phomens/nhomens);
    mediam=(pmulheres/nmulheres);
    printf("\nO total da folha de pagamento é R$ %.2f.",totalpagamento);
    printf("\nO número total de peças fabricadas no mês é %.0d.",pecastotal);
    printf("\nA média das peças fabricadas por homens é %.0f e por mulheres %.0f.",mediah,mediam);
    printf("\nO operário de maior sálario é o %f com %.2d.",nmaior,maiorsalario);
    return 0;
}