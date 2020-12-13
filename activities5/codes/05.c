// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int vet[10],num,i,posicao,a[10];
    float b[10];
    posicao=0;
    
    for (i=1; i<=10; i++){
        a[i]=rand();
        if (a[i]%2==0){
            b[i]=a[i]/2;
        }
        else{
            b[i]=a[i]*3;
        }
    }
    
    printf("A ");
    for (i=1; i<=10; i++){
        printf("%.2d, ", a[i]);
    }
    
    printf("\nB ");
    for (i=1; i<=10; i++){
        printf("%.2f, ", b[i]);
    }
    return 0;
}
  