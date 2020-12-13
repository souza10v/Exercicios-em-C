// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int i,j,k;
    float matriz[3][8][4],mediaturma[3],mediageral;


    printf("\nInsira a Matriz: ");
    for (i=0; i<=2; i++){
        for (j=0; j<=7; j++){
            for (k=0; k<=3; k++){
            printf("\nTurma %d Aluno %d Discplina %d: ",i+1,j+1,k+1);
            scanf("%f ",&matriz[i][j][k]);
            }
        }
    }
    
    printf("\nA Matriz é:");
    for (i=0; i<=2; i++){
        printf("\n ");
        printf("\nTurma %d. Disciplinas por coluna 1,2,3,4 ",i+1);
        mediaturma[i]=0;
        for (j=0; j<=7; j++){
            printf("\n");
            for (k=0; k<=3; k++){
            printf("%.2f ",matriz[i][j][k]);
            mediaturma[i]=mediaturma[i]+matriz[i][j][k];
            }
        }
    }
    printf("\n ");
    
    for (i=0; i<=2; i++){
        printf("\nMédia turma %d é %.2f",i+1,mediaturma[i]/24);
    }
    printf("\n ");
    mediageral=0;
    for (i=0; i<=2; i++){
        mediageral=mediageral+(mediaturma[i]/24);
    }
    mediageral=mediageral/3;
    printf("\n ");
    printf("\nMédia geral é %.2f",(mediageral));
    return 0;
}
  