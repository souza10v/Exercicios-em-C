// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a[50],b[50],c[50],i;

    for (i=1; i<=50; i++){
        printf("Insira um número para o vetor A: ");
        scanf("%d",&a[i]);
    }
    
    for (i=1; i<=50; i++){
        printf("Insira um número para o vetor B: ");
        scanf("%d",&b[i]);
    }

    for (i=1; i<=50; i++){
        c[i]=a[i]+b[i];
    }
    
    for (i=1; i<=50; i++){
        printf("%d ",c[i]);
    }


    return 0;
}
  