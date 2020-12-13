// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int matriz[6][4],maior,i,j;

    printf("\nInsira a Matriz: ");
    for (i=0; i<=5; i++){
        for (j=0; j<=3; j++){
            scanf("%d ",&matriz[i][j]);
        }
    }
    
    printf("\nA Matriz é:");
    for (i=0; i<=5; i++){
        printf("\n");
        for (j=0; j<=3; j++){
            printf("%d ",matriz[i][j]);
        }
    }
    printf("\n ");
    
    for (i=0; i<=5; i++){
        maior=-100000;
        for (j=0; j<=3; j++){
            if(matriz[i][j]>maior){
                maior=matriz[i][j];
            }
        }
        for (j=0; j<=3; j++){
            matriz[i][j]=maior*matriz[i][j];
        }
    }
    
    printf("\nA Matriz é:");
    for (i=0; i<=5; i++){
        printf("\n");
        for (j=0; j<=3; j++){
            printf("%d ",matriz[i][j]);
        }
    }
    printf("\n ");



    printf("\n ");

    return 0;
}
  