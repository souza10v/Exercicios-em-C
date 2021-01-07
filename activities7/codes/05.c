// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>

int notas(float n1,float n2,float n3,char tipo ){
    float media;
    if(tipo=='A'){
        media=(n1+n2+n3)/3;
    }
    else if (tipo == 'P'){
        media=(n1*5+n2*3+n3*2)/3;
    }
    return media;
}

int main(void) {
    float n1,n2,n3,media;
    char tipo;
    printf("\n Insira a primeira nota: ");
    scanf("%f",&n1);
    printf("\n Insira a segunda nota: ");
    scanf("%f",&n2);
    printf("\n Insira a terceirar nota: ");
    scanf("%f",&n3);
    printf("\n Insira o tipo de média:[A/P]: ");
    scanf("%s",&tipo);
    media=notas(n1,n2,n3,tipo);
    printf("\n A média é %.2f .",media);

    return 0;
}
  