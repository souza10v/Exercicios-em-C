// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int matriz[5][3];

    
    printf("\nInsira a Matriz: ");
    for (i=0; i<=4; i++){
        for (j=0; j<=2; j++){
            scanf("%d ",&matriz[i][j]);
        }
    }
    
    printf(" ");
    
    printf("\nA Matriz é:");
    for (i=0; i<=4; i++){
        printf("\n");
        for (j=0; j<=2; j++){
            printf("%d ",matriz[i][j]);
        }
    }
    printf(" ");
    
    printf("\nA Matriz transposta é:");
    for (i=0; i<=2; i++){
        printf("\n");
        for (j=0; j<=4; j++){
            printf("%d ",matriz[j][i]);
        }
    }
    

    
    return 0;
}
  