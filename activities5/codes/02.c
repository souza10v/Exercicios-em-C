// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i;
    float soma,media,altura[10];
    soma=0;
    for (i=1; i<=10; i++){
        printf("Insira a altura: ");
        scanf("%f",&altura[i]);
        soma=soma+altura[i];
    }
    
    media=soma/10;
    
    for (i=1; i<=10; i++){
        if(altura[i]>media){
           printf("\n %f", altura[i]); 
        }
    }
    return 0;
}
  