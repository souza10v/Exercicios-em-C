// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int matriz[4][4],i,j,aux1[4],aux2[4];

    printf("\nInsira a Matriz: ");
    for (i=0; i<=3; i++){
        for (j=0; j<=3; j++){
            scanf("%d ",&matriz[i][j]);
        }
    }
    
    for (i=0; i<=3; i++){
            aux1[i]=matriz[i][0];
    }
    
    for (i=0; i<=3; i++){
            aux2[i]=matriz[i][3];
    }
    
    printf("\n ");
    
    printf("\nA Matriz é:");
    for (i=0; i<=3; i++){
        printf("\n");
        for (j=0; j<=3; j++){
            printf("%d ",matriz[i][j]);
        }
    }
    printf("\n ");
    
    for (i=0; i<=3; i++){
            matriz[i][3]=aux1[i];
    }
    
    for (i=0; i<=3; i++){
            matriz[i][0]=aux2[i];
    }
    printf("\n ");
    
    printf("\nA Matriz é:");
    for (i=0; i<=3; i++){
        printf("\n");
        for (j=0; j<=3; j++){
            printf("%d ",matriz[i][j]);
        }
    }
    printf("\n ");



    printf("\n ");

    return 0;
}
  