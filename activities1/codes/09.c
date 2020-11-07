#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float raio,altura;
    printf("Insira o raio da lata de óleo: ");
    scanf("%f",&raio);
    printf("Insira a altura: ");
    scanf("%f",&altura);
    printf("O volume da lata de óleo é %.2f", 3.14159*pow(raio,2)*altura);
    system("pause");
    return 0;
}