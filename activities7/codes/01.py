#include <stdio.h>

void verificacao(num){
    if(num>=0){
        printf("\n Número positivo.");
    }
    else{
        printf("\n Número negativo.");
    }
}

int main() {
    int num;
    printf("\n Insira um número: ");
    scanf("%d",&num);
    
    verificacao(num);
    return 0;
}
  