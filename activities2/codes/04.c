/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 

int main() {
    char nome, tipo;
    float dias, consumo;
    float diastotal, subtotal,taxa,valortotal,valoruni;
    printf("Insira o nome do hospede: ");
    scanf("%s", &nome);
    printf("Insira o tipo de apartamento (A,B,C ou D): ");
    scanf("%s", &tipo);
    printf("Insira o número de diárias: ");
    scanf("%f", &dias);
    printf("Insira o consumo interno: ");
    scanf("%f", &consumo);
    if ( tipo=='A') {
        diastotal=150*dias;
        valoruni=150;
    }
    else if (tipo == 'B'){
        diastotal=100*dias;   
        valoruni=100;
    }
    else if (tipo == 'C'){
        diastotal=75*dias;   
        valoruni=75;
    }
    else{
        diastotal=50*dias;
        valoruni=50;
    }
    subtotal=diastotal+consumo;
    taxa=subtotal*0.1;
    valortotal=subtotal+taxa;
    
    printf("Nome do hóspede %s \n ",nome);
    printf("Tipo de apartamento %s \n",tipo);
    printf("Número de diárias %.2f \n",dias);
    printf("Valor unitário da diária %.2f \n",valoruni);
    printf("O valor total das diárias %.2f \n",diastotal);
    printf("O valor do consumo interno %.2f \n",consumo);
    printf("O subtotal %.2f \n",subtotal);
    printf("O valor da taxa de serviço %.2f \n",taxa);
    printf("Total Geral %.2f \n",valortotal);

    system("pause");
    return 0;
}