// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int matriz[4][7],i,j,maior,maiorpi,maiorpj,menor,menorpi,menorpj;
    menor=1000000;
    maior=-100000;
    
    printf("\nInsira a Matriz: ");
    for (i=0; i<=3; i++){
        for (j=0; j<=6; j++){
            scanf("%d ",&matriz[i][j]);
        }
    }
    
    printf("\nA Matriz é:");
    for (i=0; i<=3; i++){
        printf("\n");
        for (j=0; j<=6; j++){
            printf("%d ",matriz[i][j]);
        }
    }
    
    for (i=0; i<=3; i++){
        for (j=0; j<=6; j++){
            if(matriz[i][j]<menor){
                menor=matriz[i][j];
                menorpi=i;
                menorpj=j;
            }
        }
    }
        
    for (j=0; j<=6; j++){
        if(matriz[menorpi][j]>maior){
            maior=matriz[menorpi][j];
            maiorpi=menorpi;
            maiorpj=j;
        }
    }

    
    printf("\nO elemento MINMAX é o número %d na posição %d %d",maior,menorpi+1,maiorpj+menorpj+1);

    
    return 0;
}
  