// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int matriz[3][5],i,k,j,soma;

    printf("\nInsira a Matriz: ");
    for (i=0; i<=2; i++){
        for (j=0; j<=4; j++){
            scanf("%d ",&matriz[i][j]);
        }
    }
    
    printf("\n ");
    
    printf("\nA Matriz é:");
    for (i=0; i<=2; i++){
        printf("\n");
        for (j=0; j<=4; j++){
            printf("%d ",matriz[i][j]);
        }
    }
    printf("\n ");
    
    printf("\nA Matriz multiplicada por dois é:");
    for (i=0; i<=2; i++){
        printf("\n");
        for (j=0; j<=4; j++){
            printf("%d ",matriz[i][j]*2);
        }
    }
    printf("\n ");

    return 0;
}
  