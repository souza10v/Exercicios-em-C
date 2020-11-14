// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n1,n2,n3,nfinal;   
    printf("Insira a primeira nota: ");
    scanf("%f", &n1);
    printf("Insira a primeira nota: ");
    scanf("%f", &n2);
    printf("Insira a primeira nota: ");
    scanf("%f", &n3);
    nfinal=(2*n1+3*n2+5*n3)/10;
    if (nfinal >= 8 && nfinal <= 10){
        printf("Aluno com conceito A.");
    }
    else if (nfinal >= 7 && nfinal < 8){
        printf("Aluno com conceito B.");
    }
    else if (nfinal >= 6 && nfinal < 7){
        printf("Aluno com conceito C."); 
    }   
    else if (nfinal >= 5 && nfinal < 6){
        printf("Aluno com conceito D.");    
    }
    else{
        printf("Aluno com conceito E.");
    }
    return 0;
}