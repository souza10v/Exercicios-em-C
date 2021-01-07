// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>

int fatorial(int fat){
    int fatfinal,i;
    fatfinal=1;
    for(i=fat;i>=1;i--){
        fatfinal=fatfinal*i;
    }
    return fatfinal;
}

int comb(int k, int n){
    int combi;
    
    if(k==1){
        combi=n;
    }
    else if(k==n){
        combi=1;
    }
    else if(1<k && k<n){
        combi=(fatorial(n)/(fatorial(k)*(fatorial(n-k))));
    }
    
    printf("\n O valor de comb é %d",combi);
    
}

int main(void) {
    int n,k;
    
    printf("\n Insira n: ");  
    scanf("%d",&n);
    
    printf("\n Insira k: ");  
    scanf("%d",&k);
    
    comb(k,n);

    return 0;
}
  