// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>

void temposeg(){
    float segundos;
    printf("\n Insira o tempo em segudos: ");
    scanf("%f",&segundos);
    printf("\n O tempo em horas %.2f, minutos %.2f e segudos %.2f .",segundos/3600,segundos/60,segundos);
}

int main() {
    temposeg();
    return 0;
}
  