// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num,i,soma;
    soma=0;
    printf("Insira um número: ");
    scanf("%d",&num);
    for (i = 1; i < num; i++){
        if (num%i==0){
            soma=soma+i;
        }
    }
    if(soma == num){
        printf("O número %d é perfeito.",num);
    }
    else{
        printf("O número %d não é perfeito.",num);
    }
    return 0;
}
  