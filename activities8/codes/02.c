// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>

int inverter(int nums[10]){
    int inverso[10],i,k;
    k=1;
    for(i=10;i>=1;i--){
        inverso[k]=nums[i];
        k=k+1;
    }
    for(i=1;i<=10;i++){
        printf(" %d ",inverso[i]);
    }
}

int main() {
    int nums[10],i,inv[10];
    
    for(i=1;i<=10;i++){
        printf("Insira o número %d: ",i);
        scanf("%d",&nums[i]);
    }
    
   inverter(nums);
    
    return 0;
}
  