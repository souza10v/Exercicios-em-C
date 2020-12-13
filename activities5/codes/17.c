// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n,m,i,j,k,somacoluna,somadiagonal,aux;
    float media;
    printf("Dada uma Matriz NxM.");
    printf("\nInsira N: ");
    scanf("%d",&n);
    printf("\nInsira M: ");
    scanf("%d",&m);
    
    int matriz[n][m];

    printf("\nInsira a Matriz: ");
    for (i=0; i<=n-1; i++){
        for (j=0; j<=m-1; j++){
            scanf("%d ",&matriz[i][j]);
        }
    }
    
    printf("\nA Matriz é:");
    for (i=0; i<=n-1; i++){
        printf("\n");
        for (j=0; j<=m-1; j++){
            printf("%d ",matriz[i][j]);
        }
    }
    printf("\n ");
    
    printf("\nA soma dos valores da é:");
    
    if(n>=m){
        for (i=0; i<=m-1; i++){
        somacoluna=0;
        printf("\nColuna %d: ",i);
        for (j=0; j<=n-1; j++){
            somacoluna=somacoluna+matriz[j][i];
        }
        printf(" %d",somacoluna);
    }
    }
    
    else{
        for (i=0; i<=n-1; i++){
        somacoluna=0;
        printf("\nColuna %d: ",i);
        for (j=0; j<=m-1; j++){
            somacoluna=somacoluna+matriz[j][i];
        }
        printf(" %d",somacoluna);
    }
    }
    
    media=0;
    
    for (i=0; i<=n-1; i++){
        for (j=0; j<=m-1; j++){
            media=media+matriz[i][j];
        }
    }
    
    media=(media/(n*m));
    
    printf("\n ");
    
    printf("\nOs valores menores que a média são ");
    
    for (i=0; i<=n-1; i++){
        for (j=0; j<=m-1; j++){
            if(matriz[i][j]<media){
                printf("%d, ",matriz[i][j]);
            }
        }
    }

    
    if(m!=n){
        printf("\nMatriz não possui diagonais.");
    }
    else{
        somadiagonal=0;
        k=n-1;
        for (i=0; i<=n-1; i++){
            somadiagonal=somadiagonal+matriz[i][k];
        k=k-1;    
        }
        printf("\nA soma da diagonal secundaria é %d.",somadiagonal);
    }

    
    printf("\n ");



    printf("\n ");

    return 0;
}
  