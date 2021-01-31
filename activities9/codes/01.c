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
    char nome[200],RA[200],rua[200],nresidencia[200],bairro[200],cidade[200],estado[200];
    float nota;
} Cadastro;

Cadastro alunos[35];

int alterar(char auxr){
    int resposta=0;
    
    if(auxr=='A' || auxr=='a'){
        resposta=1;
    }
    else if(auxr=='B' || auxr=='b'){
        resposta=2;
    }
    else if(auxr=='C' || auxr=='c'){
        resposta=3;
    }
    else if(auxr=='D' || auxr=='d'){
        resposta=4;
    }
    return resposta;
}

float calculo_notas(int gabarito[4],int notasalunos[4][35],int nquestoes,int naluno){
    int i;
    float nota;
    
    nota=0;
    
    for(i=1;i<=nquestoes;i++){
        if(gabarito[i]==notasalunos[naluno][i]){
            nota=nota+0.5;
        }
    }
    //printf("\nAluno %d nota %f",naluno,nota);
    return nota;
}



float calculomedia(float notas[35],int nalunos){
    int i;
    float media;
    media=0;
    for(i=1;i<=nalunos;i++){
        media=media+notas[i];
    }
    media=media/nalunos;
    
    return(media);
}

float calculomaiornota(float notas[35], int nalunos){
    int i,posicaomaior;
    float maior;
    maior=-10000;
    
    for(i=1; i<=nalunos;i++){
        if(notas[i]>maior){
            maior=notas[i];
            posicaomaior=i;
        }
    }
    return(maior);
}

float calculomenornota(float notas[35], int nalunos){
    int i;
    float menor;
    menor=10000;
    
    for(i=1; i<=nalunos;i++){
        if(notas[i]<menor){
            menor=notas[i];
        }
    }
    return(menor);
}

float porcentagemaprovados(float notas[35],float nalunos,int nquestoes){
    int i;
    float media,contaprovados, porcaprovados;
    
    contaprovados=0;
    
    media=nquestoes*0.5*0.6;
    
    for(i=1; i<=nalunos; i++){
        if(notas[i]>media){
            contaprovados=contaprovados+1;
        }
    }
    
    porcaprovados=(contaprovados/nalunos)*100;

    return(porcaprovados);
}


float exibirdados(float notas[35], int nalunos){
    int i,posicaomaior;
    float maior;
    maior=-10000;
    
    for(i=1; i<=nalunos;i++){
        if(notas[i]>maior){
            maior=notas[i];
            posicaomaior=i;
        }
    }
    return(posicaomaior);
}



int main() {

int nalunos,nquestoes,posicaoordenar,posicaomaior, i,k,j,l,g;
char aux1, aux2,*nomecrescente[35];
int gabarito[20],notasalunos[20][35],numaluno[35];
float notasf[35],notasordenar,raordenar,notascrescente[35],media, maiornota, menornota, aprovados;

notasordenar=10000;
raordenar=10000;
posicaoordenar=0;

nalunos=35;
nquestoes=20;

printf("\n==Cadastro do aluno==");
printf(" \n ");


for(i=1; i<=nalunos; i++) {
    printf("\nAluno %d \n",i);
    printf("Digite o nome: ");
    scanf("%s%*c", &alunos[i].nome);
    printf("Digite o RA: ");
    scanf("%s%c",&alunos[i].RA);
    //printf("Digita a nota: ");
    //scanf("%f%c",&alunos[i].nota);
    printf("Digite a rua: ");
    scanf("%s%c",&alunos[i].rua);
    printf("Digite o número da residência: ");
    scanf("%s%*c", &alunos[i].nresidencia);
    printf("Digite o bairro: ");
    scanf("%s%*c", &alunos[i].bairro);
    printf("Digite a cidade: ");
    scanf("%s%*c", &alunos[i].cidade);
    printf("Digite o estado: ");
    scanf("%s%*c", &alunos[i].estado);
}

printf("\n==Cadastro do Gabarito==");
printf(" \n" );
printf("\nRepostas possíveis: a,b,c ou d");
printf("\n");

for(k=1; k<=nquestoes; k++) {
    printf("Resposta da questão %d: ",k);
    scanf("%s",&aux1);
    gabarito[k]=alterar(aux1);
}

printf("\n==Cadastro questões dos alunos==");
printf(" \n");

for(j=1; j<=nalunos; j++) {
    printf("\nAluno %d \n" ,j);
    for(l=1; l<=nquestoes; l++) {
        printf("Resposta da questão %d: ",l);
        scanf("%s",&aux2);
        notasalunos[j][l]=alterar(aux2);
    }
}

//printf("\n==Gabarito== ");
//printf("\n \n");
for(j=1; j<=nquestoes; j++) {
    //printf("%d " ,gabarito[j]);
}
//printf("\n \n");
//printf("\n==Respostas alunos==");
//printf("\n \n");
for(j=1; j<=nalunos; j++) {
   // printf("\nAluno %d \n" ,j);
    for(l=1; l<=nquestoes; l++) {
        //printf("%d,  ",notasalunos[j][l]);
    }
}

//printf("\n ");
//printf("\n==Notas alunos==");
//printf("\n ");

for(g=1; g<=nalunos; g++) {
alunos[g].nota=calculo_notas(gabarito, notasalunos, nquestoes, g);
notasf[g]=alunos[g].nota;
}
//printf("\n ");

for(k=1; k<=nalunos; k++) {
notasordenar=1000;
    for(j=1; j<=nalunos; j++) {
        if(notasf[j]!=1000){
            if(notasf[j]<notasordenar){
                notasordenar=notasf[j];
                posicaoordenar=j;
            }
        }
    }
    notascrescente[k]=notasordenar;
    nomecrescente[k]=alunos[posicaoordenar].nome;
    numaluno[k]=posicaoordenar;
    notasf[posicaoordenar]=1000;
    posicaoordenar=0;
}
printf("\n==Ordem Crescente==\n");
for(k=1; k<=nalunos; k++) {
    printf("\nAluno %d nota %.2f. ",numaluno[k],notascrescente[k]);
}

printf("\n ");
media=calculomedia(notascrescente,nalunos);
printf("\nA média da turma é %.2f.",media);
printf("\n ");

maiornota=calculomaiornota(notascrescente,nalunos);
printf("\nA maior nota é %.2f.",maiornota);
printf("\n ");

menornota=calculomenornota(notascrescente,nalunos);
printf("\nA menor nota é %.2f.",menornota);
printf("\n ");

aprovados=porcentagemaprovados(notascrescente,nalunos,nquestoes);
printf("\nO porcentagem de aprovados é %.2f%%.",aprovados);
printf("\n ");

posicaomaior=exibirdados(notasf,nalunos);

printf("\nO aluno %s RA %s tem a maior nota de %.2f. \nEndereço rua %s, número %s, bairro %s, cidade %s e estado %s.", alunos[posicaomaior].nome, alunos[posicaomaior].RA, alunos[posicaomaior].nota, alunos[posicaomaior].rua, alunos[posicaomaior].nresidencia, alunos[posicaomaior].bairro, alunos[posicaomaior].cidade, alunos[posicaomaior].estado);

return 0;

}