// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <string.h>

typedef struct {
    char nome[200];
    int valorimposto,numatraso;
} Cadastro;

Cadastro iptu[1000];
char nome[200];
int posicao,quant;

int main() {
int i = 0;
float total = 0;

printf(" \n \n");


printf(" Cadastrar quantos imoveis? ");
scanf("%d",&quant);

float multas[quant];

for(i=0; i<quant; i++) {
    printf("\n Digite a identificação do imóvel: ");
    scanf("%s%*c", &iptu[i].nome);
    printf("\n Digite o valor do imposto: ");
    scanf("%d%c",&iptu[i].valorimposto);
    printf("\n Digite o número de meses em atraso: ");
    scanf("%d%c",&iptu[i].numatraso);
}

printf(" \n ");
printf(" \n ");

for(i=0; i<quant; i++) {
    multas[i]=iptu[i].valorimposto*0.02*iptu[i].numatraso;
}

printf("ID Imp[R$] M  Multa[R$]  Total[R$]");

for(i=0; i<quant; i++) {
    printf(" \n %s  %d  %d    %.2f    %.2f ", iptu[i].nome, iptu[i].valorimposto, iptu[i].numatraso, multas[i], multas[i]+iptu[i].valorimposto);
    total=total+multas[i]+iptu[i].valorimposto;
}

printf(" \n ");
printf(" \n ");

printf(" O total arrecadado pelo município é de R$ %.2f",total);

return 0;

}