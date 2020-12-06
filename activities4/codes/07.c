// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n,k,i;
    float crazy;
    printf("Insira um número de termos: ");
    scanf("%d",&n);
    crazy=1;
    for (i = 2; i<=n; i++){
        crazy=crazy+((n-1)/(pow(2,n)));
    }
    printf("%f ",crazy);
    return 0;
}
  