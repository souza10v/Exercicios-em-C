#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num;
    printf("Insira um número inteiro: ");
    scanf("%d",&num);
    printf("O próximo número é %d e o antecessor é %d .",num-1,num+1);
    system("pause");
    return 0;
}