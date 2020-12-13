// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int ordem,i,j;
    printf("Qual a ordem da Matriz? ");
    scanf("%d",&ordem);
    
    int matriz[ordem][ordem];

    printf("\nInsira a Matriz: ");
    for (i=0; i<=ordem-1; i++){
        for (j=0; j<=ordem-1; j++){
            scanf("%d ",&matriz[i][j]);
        }
    }
    
    printf("\n ");
    
    printf("\nA Matriz é:");
    for (i=0; i<=ordem-1; i++){
        printf("\n");
        for (j=0; j<=ordem-1; j++){
            printf("%d ",matriz[i][j]);
        }
    }
    printf("\n ");
    

    for (i=0; i<=ordem-1; i++){
        for (j=0; j<=ordem-1; j++){
            if(matriz[i][j]==matriz[j][i]){
                printf("\n%d = %d. É simétrica.",matriz[i][j],matriz[j][i]);