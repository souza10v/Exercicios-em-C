
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float salario, quantidade_quiliowatts;
    printf("Qual o valor do sálario mínimo: ");
    scanf("%f", &salario);
    printf("Quantidade de quilowatts: ");
    scanf("%f", &quantidade_quiliowatts);
    printf("O valor de cada quilowatt hora é %.2f reais. ", salario/7);
    printf("O valor pago na conta é %.2f reais.", salario/7*quantidade_quiliowatts);
    printf("O novo valor a ser pago com desconto de 10% é %.2f reais.", salario/7*quantidade_quiliowatts*0.9);
    system("pause");
    return 0;
}