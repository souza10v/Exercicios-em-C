// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>


void soma(num1,num2){
    int result;
    result=num1+num2;
    printf("\n O resultado da soma é %d ",result);
}

int main() {
    int num1,num2;
    printf("\n Insira o primeiro número positivo inteiro: ");
    scanf("%d",&num1);
    printf("\n Insira o primeiro número positivo inteiro: ");
    scanf("%d",&num2);
    
    soma(num1,num2);
    return 0;
}
  