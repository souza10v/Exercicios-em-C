// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int conttmenormeda,i;
    float temp[121], tmedia, menort, maiort;

    tmedia=0;
    maiort=-10000;
    menort=10000;
    conttmenormeda=0;
    
    for (i=1; i<=121; i++){
        printf("Insira a temperatura %d: ",i);
        scanf("%f",&temp[i]);
        if(temp[i]>maiort){
            maiort=temp[i];
        }
        if(temp[i]<menort){
            menort=temp[i];
        }
        tmedia=tmedia+temp[i];
    }
    
    tmedia=tmedia/121;
    
    for (i=1; i<=121; i++){
        if(temp[i]<tmedia){
            conttmenormeda=conttmenormeda+1;
        }
    }

    printf("\nA menor temperatura foi %.2f.",menort);
    printf("\nA maior temperatura foi %.22f",maiort);
    printf("\nA temperatura média foi de %.2f",tmedia);
    printf("\nO número de dias que a temperatura foi inferior a média foi de %.2d",conttmenormeda);
    
    return 0;
}
  