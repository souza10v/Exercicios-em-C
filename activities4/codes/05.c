// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n,n1,n2, numero, i;
    

    printf("Insira um número de termos: ");
    scanf("%d",&n);
    printf("Insira um número 1: ");
    scanf("%d",&n1);
    printf("Insira um número 2: ");
    scanf("%d",&n2);
    printf("%d ",n1);
    printf("%d ",n2);
    for (i = 1; i <= n; i++){
        if(i%2==0){
            numero=n2-n1;
            n1=n2;
            n2=numero;
            printf("%d ",numero);
            //par
        }
        else{
            numero=n2+n1;
            n1=n2;
            n2=numero;
            printf("%d ",numero);
            //impar
        }
    }
    return 0;
}
  