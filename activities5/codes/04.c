// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int vet[100],num,i,posicao;
    posicao=0;
    
    for (i=1; i<=100; i++){
        printf("Insira um número: ");
        scanf("%d",&vet[i]);
    }
    
    printf("Insira mais um número: ");
    scanf("%d",&num);
    
    for (i=1; i<=100; i++){
        if(num == vet[i]){
            posicao=i;
        }
    }

    if(posicao!=0){
        printf("\n O número %d está na posicao %d.",num,posicao);
    }
      
    else{
         printf("\n O número %d está na posicao %d.",num,posicao);
    }

    return 0;
}
  