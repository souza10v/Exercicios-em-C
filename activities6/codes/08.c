#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <string.h>

typedef struct {
    char nome[200],tipos[200],fatorh[200];
    int anonascimento,mesnascimento,dianascimento;
} Cadastro;

Cadastro doadores[600];
char nome[200];
int posicao;

int main() {
int i = 0;
int quant=600;

float idade[quant];

printf(" \n \n");

for(i=0; i<quant; i++) {
    printf("\n Digite o nome do doador: ");
    scanf("%s%*c", &doadores[i].nome);
    printf("\n Digite o ano de nascimento: ");
    scanf("%d%c",&doadores[i].anonascimento);
    printf("\n Digite o mês de nascimento: ");
    scanf("%d%c",&doadores[i].mesnascimento);
    printf("\n Digite o dia de nascimento: ");
    scanf("%d%c",&doadores[i].dianascimento);
    printf("\n Digite o tipo sanguineo: ");
    scanf("%s%*c", &doadores[i].tipos);
    printf("\n Digite o fator RH: ");
    scanf("%s%*c", &doadores[i].fatorh);
    
}

for(i=0; i<quant; i++) {

    printf(" \n O nome do doador é: %s ", doadores[i].nome);
    printf(" \n A data de nascimento é %d %d %d", doadores[i].anonascimento, doadores[i].mesnascimento ,doadores[i].dianascimento);
    printf("\n O tipo sanguineo %s.",doadores[i].tipos);
    printf("\n Digite o fator RH %s.",doadores[i].fatorh);
    printf(" \n ");
}

printf(" \n ");

for(i=0; i<quant; i++) {
    idade[i]=2021-doadores[i].anonascimento;
}

printf("\n Tipo sanguineo B:");

for(i=0; i<quant; i++) {
    if(idade[i]>=18 && idade[i]<=55){
        printf("\n O tipo sanguineo %s.",doadores[i].tipos);
        if(doadores[i].tipos=='B+'){
            printf(" \n %s ", doadores[i].nome);
        }
    }
}

return 0;

}