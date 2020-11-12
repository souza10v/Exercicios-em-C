/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float peso, altura, imc;
    printf("Insira o primeiro peso em quilos: ");
    scanf("%f", &peso);
    printf("Insira a altura em metros: ");
    scanf("%f", &altura);
    imc = peso/(pow(altura,2));
    if (imc<18.5){
        printf("Magreza");
    }
    else if(imc >= 18.5 && imc < 24.9 ){
        printf("Saudável ");
    }
    else if(imc >= 25 && imc < 29.9 ){
        printf("Sobrepeso ");
    }
    else if(imc >= 30 && imc < 34.9 ){
        printf("Obesidade Grau I ");
    }
    else{
        printf("Obesidade Grau II ");
    }
    system("pause");
    return 0;
}