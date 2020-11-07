#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float valor;
    printf("Qual o valor gasto no restaurante?");
    scanf("%f", &valor);
    printf("O valor gasto no total %.2f", valor*1.1);
    system("pause");
    return 0;
}