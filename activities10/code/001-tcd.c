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
    char nome[200],local[200],data[200],bairro[200],cidade[200],estado[200],b1nome[200],b2nome[200],b3nome[200],b4nome[200],b1teor[200],b2teor[200],b3teor[200],b4teor[200];
    float indentificador,ingressosv,custoorg,valorent,ingressospop,ingressosnor,ingressosesp,b1valor,b2valor,b3valor,b4valor,totalevento,resultadoevento;
    int tipoe;
} cadastro;

cadastro eventos[1000];

int main() {
    int opcao,conteventos,i,j;
    float ing1,ing2,ing3,saldofinal,evento,identificadorevento;
    char aux1[200];
    
    opcao=1;
    conteventos=0;
    saldofinal=0;
    
    while(opcao!=6){
    printf("\n");
    printf("\n----Selecione uma opção----");
    printf("\n ");
    printf("\n1 - Cadastrar evento");
    printf("\n2 - Pesquisar evento");
    printf("\n3 - Ingressos vendidos");
    printf("\n4 - Exibir resultado por evento");
    printf("\n5 - Exibir resultado geral");
    printf("\n6 - Sair");
    printf("\n");
    scanf("%d",&opcao);
    printf("\n");
    switch(opcao){
        case 1:
        printf("\nInsira o identificador do evento: ");
        scanf("%f",&evento);
        while(evento!=0){
            conteventos=1+conteventos;
            eventos[conteventos].indentificador=evento;
            printf("\nInsira o nome do evento: ");
            scanf("%s%*c",&eventos[conteventos].nome);
            printf("Insira o local do evento: ");
            scanf("%s%*c",&eventos[conteventos].local);
            printf("Insira a data do evento: ");
            scanf("%s%*c",&eventos[conteventos].data);
            printf("Insira a quantidade de ingressos a venda: ");
            scanf("%f%*c",&eventos[conteventos].ingressosv);
            printf("Insira o custo de organização do evento: ");
            scanf("%f%*c",&eventos[conteventos].custoorg);
            printf("Insira o valor da entrada do evento: ");
            scanf("%f%*c",&eventos[conteventos].valorent);
            printf("\nTipo de evento - 1 open bar e 2 não open bar: ");
            scanf("%d%*c",&eventos[conteventos].tipoe);
            if (eventos[conteventos].tipoe==1){
                printf("\nInsira o nome da bebida 1: ");
                scanf("%s%*c",&eventos[conteventos].b1nome);
                printf("Insira o toer alcoolico da 1: ");
                scanf("%s%*c",&eventos[conteventos].b1teor);
                printf("Insira o valor da bebida 1: ");
                scanf("%f%*c",&eventos[conteventos].b1valor);
                
                printf("\nInsira o nome da bebida 2: ");
                scanf("%s%*c",&eventos[conteventos].b2nome);
                printf("Insira o toer alcoolico da 2: ");
                scanf("%s%*c",&eventos[conteventos].b2teor);
                printf("Insira o valor da bebida 2: ");
                scanf("%f%*c",&eventos[conteventos].b2valor);
                
                printf("\nInsira o nome da bebida 3: ");
                scanf("%s%*c",&eventos[conteventos].b3nome);
                printf("Insira o toer alcoolico da 3: ");
                scanf("%s%*c",&eventos[conteventos].b3teor);
                printf("Insira o valor da bebida 3: ");
                scanf("%f%*c",&eventos[conteventos].b3valor);
                
                printf("\nInsira o nome da bebida 4: ");
                scanf("%s%*c",&eventos[conteventos].b4nome);
                printf("Insira o toer alcoolico da 4: ");
                scanf("%s%*c",&eventos[conteventos].b4teor);
                printf("Insira o valor da bebida 4: ");
                scanf("%f%*c",&eventos[conteventos].b4valor);
            }
        printf("\nInsira o identificador do evento: ");
        scanf("%f",&evento);
        }

        break;
        case 2:
        printf("Insira o identificador do evento buscado: ");
        scanf("%f",&identificadorevento);
        for(i=1;i<=conteventos;i++){
            if (identificadorevento==eventos[i].indentificador){
                printf("\nIdentificador do evento %f.",eventos[i].indentificador);
                printf("\nNome do evento %s.",eventos[i].nome);
                printf("\nLocal do evento %s.",eventos[i].local);
                printf("\nData do evento %s.",eventos[i].data);
                printf("\nQuantidade de ingressos a venda %.2f.",eventos[i].ingressosv);
                printf("\nCusto de organização do evento %.2f.",eventos[i].custoorg);
                printf("\nValor de entrada do evento %.2f.",eventos[i].valorent);
                printf("\n");
            }
        }
        break;
        case 3:
        printf("Insira o identificador do evento buscado: ");
        scanf("%f",&identificadorevento);
        for(i=1;i<=conteventos;i++){
            if (identificadorevento==eventos[i].indentificador){
            
            
            printf("\nA quantidade de ingressos a venda %f.",eventos[i].ingressosv);
            printf("\nQuantos ingressos populares: ");
            scanf("%f%*c",&eventos[i].ingressospop);
            printf("Quantos ingressos normais: ");
            scanf("%f%*c",&eventos[i].ingressosnor);
            printf("Quantos ingressos vips: ");
            scanf("%f%*c",&eventos[i].ingressosesp);
            if (eventos[i].tipoe==1){
                ing1=60+eventos[i].b1valor*0.5+eventos[i].b2valor*0.5+eventos[i].b3valor*0.5+eventos[i].b4valor*0.5;
            }
            else{
                ing1=eventos[i].custoorg/eventos[i].ingressosv;
                }
                
            ing2=ing1*1.1;
            ing3=ing2*1.15;
            
            eventos[i].totalevento=ing1*eventos[i].ingressospop+ing2*eventos[i].ingressosnor+ing3*eventos[i].ingressosesp;

            printf("\ntotal %f", eventos[i].totalevento);
            
            eventos[i].resultadoevento=eventos[i].totalevento-eventos[i].custoorg;
            }
        }

        break;
        case 4:
        printf("Insira o identificador do evento buscado: ");
        scanf("%f",&identificadorevento);
        for(i=1;i<=conteventos;i++){
            if (identificadorevento==eventos[i].indentificador){
            printf("\nEvento %.0f, Lucro/Prejuizo R$%.2f",identificadorevento, eventos[i].resultadoevento);
            printf("\n");
            }
        }
        break;
        case 5:
        saldofinal=0;
        for(i=1;i<=conteventos;i++){
            saldofinal=eventos[i].resultadoevento+saldofinal;
        }
        printf("\nSaldo Final  R$%.2f",saldofinal);
        printf("\n");
        break;
    }
    }
    
    printf("\nFim de execução.");
    return 0;
}





