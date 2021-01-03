// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------



#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>

int fatorial(int n1) {
    if (n1 >= 0) {
        int fat = 1;
        while (n1 > 0) {
            fat = fat*n1;
            n1--;
        }
        return fat;
    }
}

int fibonacci(int n2){
    int aux1,aux2,aux3,k;
    aux1=0;
    aux2=1;
    for (k=1; k<=n2; k++){
        aux3=aux2;
        aux2=aux1+aux2;
        aux1=aux3;
    }
    return aux1;
}
    
int main() {
    
    int num,i;
    float doido,old;
    
    printf("Insira o valor n: ");
    scanf("%d",&num);
    
    doido=2;
    i=1;
    
    while(doido>1){
        if(i==1){
                doido=fatorial(num);
            }
        else{
            if(i%2==0){
               doido=doido-(pow(fatorial(num-(i-1)),i)/fibonacci(i));
             }
             else{
               doido=doido+(pow(fatorial(num-(i-1)),i)/fibonacci(i));
                }
            }
        i=i+1;    
        if(old==doido){
            break;
        }
        
        old=doido;
        
    }
    
    printf("O número doido é %f",doido);
}

