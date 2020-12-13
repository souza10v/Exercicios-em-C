// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num,aux1,aux2,aux3,i;
    aux1=1;
    aux2=1;
    
    printf("Insira o número de termos:  ");
    scanf("%d",&num);
    
    int fib[num];
    
    for (i=1; i<=num; i++){
        aux3=aux2;
        aux2=aux1+aux2;
        aux1=aux3;
        
        fib[i]=aux1;
    }
    printf("\n 1, ");
    for (i=1; i<=num; i++){
         printf("%d, ",fib[i]);
    }

    return 0;
}
  