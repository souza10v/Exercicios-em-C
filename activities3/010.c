// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float idade, peso, coefg;
    
    printf("Insira a idade do paciente: ");
    scanf("%f",&idade);
    printf("Insira o peso do paciente: ");
    scanf("%f",&peso);
    coefg=500/20;
    
    if (idade>=12 && peso>=60){
        printf("A quantidade de gotas é %.0f",1000/coefg);
    }
    else if (idade>=12 && peso<60){
        printf("A quantidade de gotas é %.0f",875/coefg);
    }
    
    if (idade<12){
        if (peso>=5 && peso<=9){
            printf("A quantidade de gotas é %.0f",125/coefg);    
        }
        else if (peso>=9.1 && peso <= 16){
            printf("A quantidade de gotas é %.0f",250/coefg);
        }
        else if (peso>=16.1 && peso <= 24){
            printf("A quantidade de gotas é %.0f",375/coefg); 
        }
        else if (peso>=24.1 && peso <= 30){
            printf("A quantidade de gotas é %.0f",500/coefg);
        }
        else if (peso>30){
            printf("A quantidade de gotas é %.0f",750/coefg);
        }
    }
}