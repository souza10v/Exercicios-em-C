// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num[30],i,posicao;
    float maior;
    maior=-100000;
    for (i=1; i<=30; i++){
        printf("Insira um número: ");
        scanf("%d",&num[i]);
            if(num[i]>maior){
                maior=num[i];
                posicao=i;
            }
    }

    printf("\n O maior número é %f na posição %d .", maior,posicao); 

    return 0;
}
  