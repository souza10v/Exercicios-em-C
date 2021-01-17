// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>

float fatorial(float fat){
    float fatfinal,i;
    fatfinal=1;
    for(i=fat;i>=1;i--){
        fatfinal=fatfinal*i;
    }
    return fatfinal;
}

float calculos(float num){
    float s,i,aux1;

    s=1;
    for(i=1;i<=num;i++){
        aux1=fatorial(i);
        s=s+(1/aux1);
    }
    return s;
}

int main() {
    int num;
    float se;
    printf("\n Insira um número N inteiro positivo: ");
    scanf("%d",&num);
    se=calculos(num);
    printf("\n S = %.2f",se);
    
    return 0;
}
  