// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota;   
    printf("Insira a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 90 && nota <= 100){
        printf("Aluno com menção SS.");
    }
    else if (nota >= 70 && nota <= 89){
        printf("Aluno com menção MS.");
    }
    else if (nota >= 50 && nota <= 69){
        printf("Aluno com menção MM."); 
    }   
    else if (nota >= 30 && nota <= 49){
        printf("Aluno com menção MI.");    
    }
    else if (nota >= 1 && nota <= 29){
        printf("Aluno com menção II.");    
    }
       else if (nota == 0 ){
        printf("Aluno sem rendimento.");    
    }
    else{
        printf("Nota inválida: ");
    }
    return 0;
}