// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num,i;
    float fatorial;
    fatorial=1;
    printf("Insira um número: ");
    scanf("%d",&num);
    for (i = 1; i <= num; i++){
        fatorial=fatorial*i;
    }
    printf("O número é %.2f .", fatorial);
    return 0;
}
  