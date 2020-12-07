// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float salariom,nhoras,coefs,salariob,imposto,gratificao,auxali,salariof;
    char categoria,t2;
    
    printf("Insira o salário mínimo: ");
    scanf("%f", &salariom);
    
    printf("Insira número de horas: ");
    scanf("%f", &nhoras);
    
    printf("Escolha o turno:\n ");
    printf("M - Matutino; \n ");
    printf("V - Vespertino;\n ");
    printf("N - Nortuno;\n");
    scanf("%s", &t2);
    
    printf("Escolha a categoria:\n ");
    printf("O - Operario; \n ");
    printf("G - Gerente;\n ");
    scanf("%s", &categoria);
    
    if(t2 == 'M'){
        coefs=(salariom*0.1);   
    }
    else if (t2 == 'V'){
        coefs=salariom*0.12;  
    }
    else if (t2 == 'N'){
        coefs=salariom*0.15; 
    }
    
    salariob=nhoras*coefs;
    
    if (categoria =='O'){
        if(salariob>=300){
        imposto=salariob*0.05;
        }
        else{
        imposto=salariob*0.03;
        }
    }
    else if (categoria =='G'){
        if(salariob>=400){
        imposto=salariob*0.06;
        }
        else{
        imposto=salariob*0.04;
        }
    }
    if (t2 == 'N' && nhoras>80){
        gratificao=50;
    } 
    else{
        gratificao=0;
    }
    
    if (categoria == 'o' && coefs<25){
        auxali=salariob*(1/3);
    }
    else{
        auxali=salariob*(1/2);
    }
    
    salariof=salariob-imposto+gratificao+auxali;

    printf("\nSalario bruto R$ %.2f", salariob);
    printf("\nImpostos %.2f", imposto);
    printf("\nGratificação %.2f", gratificao);
    printf("\nAuxilio Alimentação %.2f", auxali);
    printf("\nSalario Líquido + Beneficios R$ %.2f", salariof);
    
    if (salariof <350){
        printf("\nMal remunerado.");
    }
    else if (salariof >=350 && salariof<=600){
        printf("\nNormal.");
    }
    else {
        printf("\nBem remunerado.");
    }

}