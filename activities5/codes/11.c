// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int matriz[3][3],soma,i,j;
    soma=0;
    
    printf("\nInsira a Matriz: ");
    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
            scanf("%d ",&matriz[i][j]);
        }
    }
    
    printf("\nA Matriz é:");
    for (i=0; i<=2; i++){
        printf("\n");
        for (j=0; j<=2; j++){
            printf("%d ",matriz[i][j]);
        }
    }
    
    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
            soma=matriz[i][j]+soma;
        }
    }
    printf(" ");
    printf("\nA soma dos números da matriz é %d",soma);
    printf("\nOs números pares são ");
    for (i=0; i<=2; i++){
        for (j=0; j<=2; j++){
            if(matriz[i][j]%2==0){
                printf("%d, ",matriz[i][j]);
            }
        }
    }
    
    printf("\nColuna 3 multiplicada por 3: ");
    for (i=0; i<=2; i++){
        for (j=2; j<=2; j++){
            printf("%d, ",matriz[i][j]*3);
        }
    }
    
    printf("\nElementos da diagonal principal ");
    for (i=0; i<=2; i++){
        printf("%d, ",matriz[i][i]);
    }
    
    return 0;
}
  