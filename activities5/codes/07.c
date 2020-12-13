// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num[6],i,npar[6],nimpar[6],contpar,contimpar,div3;
    contpar=0;
    contimpar=0;
    div3=0;
    for (i=1; i<=6; i++){
        printf("Insira um número: ");
        scanf("%d",&num[i]);
            if(num[i]%2==0){
                npar[i]=num[i];
                contpar=contpar+1;
            }
            else{
                nimpar[i]=num[i];
                contimpar=num[i];
            }
            if(num[i]/3==0){
                div3=div3+1;
            }
    }
    
    printf("\n São %d números pares: ",contpar);
    for (i=1; i<=6; i++){
        if (num[i]!=0){
        printf("%d, ",npar[i]);
        }
    }
    
    printf("\n São %d números impares: ",contimpar);
    for (i=1; i<=6; i++){
        if (num[i]!=0){
        printf("%d, ",nimpar[i]);
        }
    }
    
    printf("\n São %d números divisiveis por 3.",div3); 

    return 0;
}
  