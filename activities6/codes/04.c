// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>

int main() {
    int num[6],i,k;
    int maior, pmaior, menor, pmenor, selec;
    menor=-100000;
    maior=100000;
    
    for (i = 1; i <= 6; i++){
        printf("\n Insira o um número: ");
        scanf("%d", &num[i]);
    }
    printf("\n Insira 1 para organizar em ordem crescente e 2 para descrescente: ");
        scanf("%d", &selec);
    if(selec==2){
        for (k = 1; k <= 6; k++){
            for (i = 1; i <= 6; i++){
                if(num[i]>menor){
                    menor=num[i];
                    pmenor=i;
                }
            }
            printf("%d ",menor);
            menor=-100000;
            num[pmenor]=-100000;
        }
    }    
    else{
        for (k = 1; k <= 6; k++){
            for (i = 1; i <= 6; i++){
                if(num[i]<maior){
                    maior=num[i];
                    pmaior=i;
                }
            }
            printf("%d ",maior);
            maior=100000;
            num[pmaior]=100000;
    }   
    }
return 0;
}
  