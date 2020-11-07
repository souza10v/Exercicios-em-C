
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float cato,cata;
    printf("Insira o cateto oposto: ");
    scanf("%f",&cato);
    printf("Insira o cateto adjacente: ");
    scanf("%f",&cata);
    printf("A hipotenusa é %.2f",sqrt(pow(cato,2) +pow(cata,2) ));
    system("pause");
    return 0;
}