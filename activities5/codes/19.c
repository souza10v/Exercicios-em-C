// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int i,j,cont,maiorv;
    float matriz[12][4],vendames,maior,total;
    char meses[12][20] = {"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};

    printf("\nInsira a Matriz: ");
    for (i=0; i<=11; i++){
        for (j=0; j<=3; j++){
            printf("\nMês %d Semana %d: ",i+1,j+1);
            scanf("%f ",&matriz[i][j]);
        }
    }
    
    printf("\nA Matriz é:");
    for (i=0; i<=11; i++){
        printf("\n");
        for (j=0; j<=3; j++){
            printf("%f ",matriz[i][j]);
        }
    }
    printf("\n ");
    
    
    printf("\nTotal vendido:");
    for (i=0; i<=11; i++){
        vendames=0;
        printf("\n%s ",meses[i]);
        for (j=0; j<=3; j++){
            vendames=vendames+matriz[i][j];
        }
        printf("R$ %.2f ",vendames);
    }
    
    printf("\n ");

    maior=-1000;
    total=0;
    cont=0;
    printf("\nVendido por semana:");
    for (i=0; i<=11; i++){
        for (j=0; j<=3; j++){
            cont=cont+1;
            printf("\nSemana %d total R$ %.2f. ",cont,matriz[i][j]);
            total=total+matriz[i][j];
            if(matriz[i][j]>maior){
                maior=matriz[i][j];
                maiorv=cont;
            }
        }
    }
    printf("\n ");
    printf("\n A semana com mais vendas é a %.0f.",maiorv);
    printf("\n O total de vendas no ano é %.2f.",total);

    printf("\n ");

    return 0;
}
  