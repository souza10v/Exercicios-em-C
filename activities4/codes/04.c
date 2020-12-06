// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1, i;
    float num2,produto;
    produto=0;
    printf("Insira um número inteiro : ");
    scanf("%d",&num1);
    printf("Insira um número real : ");
    scanf("%f",&num2);
    for (i = 1; i <= num1; i++){
        produto=num2+produto;
    }
    printf("O valor do produto é: %.2f",produto);
    return 0;
}
  