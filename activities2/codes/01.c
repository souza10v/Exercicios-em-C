// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float n1, n2, n3;
    float maior,menor;
    maior=-1000000;
    menor=100000000;
    printf("Insira o primeiro número: ");
    scanf("%f", &n1);
    printf("Insira o segundo número: ");
    scanf("%f", &n2);
    printf("Insira o terceiro número: ");
    scanf("%f", &n3);
    if (n1>maior){
        maior=n1;
    }
    if (n2 > maior){
        maior=n2;
    }
    if (n3 > maior){
        maior=n3;
    }
    if (n1<menor){
        menor=n1;
    }
    if (n2 < menor){
        menor=n2;
    }
    if (n3 < menor) {
        menor=n3;
    }
    printf("O maior número é %.2f e o menor é %.2f", maior,menor);
    system("pause");
    return 0;
}