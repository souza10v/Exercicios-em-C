// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n,k,i;
    float fatorial,doido,d1,d2,a1,a2;
    printf("Insira um número de termos: ");
    scanf("%d",&n);
    a1=2;
    a2=3;
    doido=0;
    for (i = 1; i<=n; i++){
        if(i%2!=0){
            fatorial=1;
            for (k = 1; k<=a2; k++){
            fatorial=fatorial*k;
               //impar
            }
        d1=pow(2,a1);
        d2=fatorial;
        a1=a1+2;
        a2=a2+2;
        doido=doido+(d1/d2);
        }
    }
    printf("%f ",doido);
    return 0;
}
  