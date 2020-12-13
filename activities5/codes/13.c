// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int matriz[4][4],i,k,j,soma;

    printf("\nInsira a Matriz: ");
    for (i=0; i<=3; i++){
        for (j=0; j<=3; j++){
            scanf("%d ",&matriz[i][j]);
        }
    }
    
    printf(" ");
    
    printf("\nA Matriz é:");
    for (i=0; i<=3; i++){
        printf("\n");
        for (j=0; j<=3; j++){
            printf("%d ",matriz[i][j]);
        }
    }
    printf(" ");
    
    j=3;
    for (i=0; i<=3; i++){
        
        soma=0;
        for (k = 2; k<=(matriz[i][j]); k++){
            if (matriz[i][j]%k==0){
                soma=soma+1;
            }
            }
                if(soma==1){
            printf("\n%d é primo.",matriz[i][j]);
            }
        j=j-1;    
        }
    
    return 0;
}
  