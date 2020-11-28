// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num,i,soma,k;
    soma=0;
    printf("Insira um número: ");
    scanf("%d",&num);
        for (i = 2; i<=num; i++){
            if (num%i==0){
                soma=soma+1;
            }
            }
        if(soma==1){
            printf("É primo.");
        }
        else{
            printf("Não é primo.");
        }
    return 0;
}
  