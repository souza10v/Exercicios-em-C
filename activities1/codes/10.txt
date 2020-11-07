#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float salario,vendas;
    printf("Insira o salário fixo: ");
    scanf("%f",&salario);
    printf("Insira o valor da vendas: ");
    scanf("%f",&vendas);
    printf("A comissão de vendas é R$%.2f, o desconto é R$%.2f e o salário líquido R$%.2f .", vendas*0.04, (salario+vendas*0.04)*0.0225, (salario+vendas*0.04)*0.9775);
    system("pause");
    return 0;
}