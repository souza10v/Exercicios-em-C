#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float preco,lucro,impostos,precof,aux1,aux2;
    printf("Insira o preço do carro: ");
    scanf("%f", &preco);
    printf("Insira o percentual de lucro: ");
    scanf("%f", &lucro);
    printf("Insira o taxa de impostos: ");
    scanf("%f", &impostos);
    precof=preco*(1+(lucro/100))*(1+(impostos/100));
    aux1=precof*(lucro/100);
    aux2=precof*(impostos/100);
    printf("O lucro do distribuidor é %f reais.\n",aux1);
    printf("O valor correspondente em impostos é %f reais.\n",aux2);
    printf("O preço final do veículo é %f reais.",precof);
    system("pause");
    return 0;
}