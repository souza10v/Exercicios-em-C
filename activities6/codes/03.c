// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>

int main() {
    int num1,num2,i,cont,s1,s2,l1,l2;
    printf("Insira o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Insira o segundo número: ");
    scanf("%d", &num2);
    
    int v1[num1];
    int v2[num2];
    
    cont=1;
    for (i = 1; i < num1; i++)
    {
        if (num1%i==0)
        {
        v1[cont]=i;
        cont=cont+1;
        }
    }
    l1=sizeof(v1[i]);
    
    cont=1;
    for (i = 1; i < num2; i++)
    {
        if (num2%i==0)
        {
        v2[cont]=i;
        cont=cont+1;
        }
    }
    l2=sizeof(v2[i]);
    
    s1=0;
    s2=0;
    
    for (i = 1; i <= l1; i++){
        //printf("\n %d",v1[i]);
        s1=s1+v1[i];
        
     }
     
    for (i = 1; i <= l2; i++){
        //printf("\n %d",v2[i]);
        s2=s2+v2[i];
     }
     
     if(l1==l2){
         printf("\nNúmero %d e %d são amigáveis.",num1,num2);
     }
     else{
         printf("\nNúmero %d e %d não são amigáveis.",num1,num2);
     }

    return 0;
}
  