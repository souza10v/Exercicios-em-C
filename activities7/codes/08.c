// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>


int hiperfatorial(int n){
    int i,hfatorial;
    hfatorial=1;
    for(i=1;i<=n;i++){
        hfatorial=hfatorial*pow(i,i);
    }
    printf("\n O valor de comb é %d",hfatorial);
    }

int main(void) {
    int n;
    
    printf("\n Insira n: ");  
    scanf("%d",&n);
    
    hiperfatorial(n);

    return 0;
}
  