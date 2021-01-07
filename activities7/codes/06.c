// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>

int determinar(int num[5]){
    int maiormenor[2],i;
    
    maiormenor[0]=-1000000;
    maiormenor[1]=100000;


    for(i=0;i<5;i++){
        if(num[i]>=maiormenor[0]){
            maiormenor[0]=num[i];
        }
        if(num[i]<=maiormenor[1]){
            maiormenor[1]=num[i];
        }
    }
    
    return maiormenor;
}

int main(void) {
    int num[5],*aux,maior,menor,i;
    
    for (i=1;i<=5;i++){
        printf("\n Insira o %d número: ",i);  
        scanf("%d",&num[i]);
    }

    aux=determinar(num);
    maior=aux[0];
    menor=aux[1];
    
    printf("\n O menor número é %d e o maior %d.",maior,menor);
    return 0;
}
  