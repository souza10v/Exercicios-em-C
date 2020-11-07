#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float base, altura, area;
    printf("Insira a base do triângulo: ");
    scanf("%f", &base);
    printf("Insira a altura do triângulo: ");
    scanf("%f", &altura);
    area = (base*altura)/2;
    printf("A área é %.2f", area);
    system("pause");
    return 0;
}