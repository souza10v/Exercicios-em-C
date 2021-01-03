// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>

void ordernar(int v[10], int h) {
    int maior, pmaior,k,i,l;
    //printf("\n here2 %d",h);
    maior=100000;
    pmaior=0;
    for (k = 1; k <= h; k++){
        for (i = 1; i <= h; i++){
            if(v[i]<maior){
                    maior=v[i];
                    pmaior=i;
                }
            }
        printf(" %d ",maior);
        maior=100000;
        v[pmaior]=100000;
    }
}


int main() {
    int va[5],vb[5],vaux1[10],contaux2,i,k,h;

    
    for (i = 1; i <= 5; i++){
        printf("\n Insira um número para va: ");
        scanf("%d", &va[i]);
    }
    
    for (i = 1; i <= 5; i++){
        printf("\n Insira um número para vb: ");
        scanf("%d", &vb[i]);
    }
        
    for (i = 1; i <= 5; i++){
        vaux1[i]=va[i];
    }
    
    for (i = 1; i <= 5; i++){
        vaux1[i+5]=vb[i];
    }
    
    ordernar(vaux1,10);
    
    contaux2=0;
    
    for (k = 1; k <= 5; k++){
        for (i = 1; i <= 5; i++){
            if(va[k]==vb[i]){
                contaux2=1+contaux2;
            }
        }
    }
    
    int vaux2[contaux2];
    //printf("contaux2 %d",contaux2);
    contaux2=1;
    
    
    for (k = 1; k <= 5; k++){
        for (i = 1; i <= 5; i++){
            if(va[k]==vb[i]){
                //printf("\n here %d %d",va[k],vb[k]);
                vaux2[contaux2]=va[k];
                contaux2=1+contaux2;
            }
        }
    }
    printf("\n ");
    ordernar(vaux2,contaux2-1);
    
return 0;
}
  