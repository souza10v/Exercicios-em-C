// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>


int main() {
    char *nomes[13],*endereco[13];
    int cpf[13], telefones[13], insumos[13],producaototal[13],data[13];
    
    nomes[1]="Roberto";
    nomes[2]="Luan";
    nomes[3]="Maria";
    nomes[4]="Joao";
    nomes[5]="Rodrigo";
    nomes[6]="Renata";
    nomes[7]="Carlos";
    nomes[8]="Pedro";
    nomes[9]="Ana";
    nomes[10]="Marcos";
    nomes[11]="Gabriel";
    nomes[12]="Michele";
    
    endereco[1]="Rua 1";
    endereco[2]="Rua 2";
    endereco[3]="Rua 3";
    endereco[4]="Rua 4";
    endereco[5]="Rua 5";
    endereco[6]="Rua 6";
    endereco[7]="Rua 7";
    endereco[8]="Rua 8";
    endereco[9]="Rua 9";
    endereco[10]="Rua 10";
    endereco[11]="Rua 11";
    endereco[12]="Rua 12";
    
    cpf[1]=100001;
    cpf[2]=100002;
    cpf[3]=100003;
    cpf[4]=100004;
    cpf[5]=100005;
    cpf[6]=100006;
    cpf[7]=100007;
    cpf[8]=100008;
    cpf[9]=100009;
    cpf[10]=1000010;
    cpf[11]=1000011;
    cpf[12]=1000012;
    
    telefones[1]=111111;
    telefones[2]=111112;
    telefones[3]=111113;
    telefones[4]=111114;
    telefones[5]=111115;
    telefones[6]=111116;
    telefones[7]=111117;
    telefones[8]=111118;
    telefones[9]=111119;
    telefones[10]=111110;
    telefones[11]=111111;
    telefones[12]=111112;
    
    insumos[1]=7;
    insumos[2]=6;
    insumos[3]=3;
    insumos[4]=9;
    insumos[5]=12;
    insumos[6]=35;
    insumos[7]=6;
    insumos[8]=22;
    insumos[9]=7;
    insumos[10]=34;
    insumos[11]=11;
    insumos[12]=21;
    
    producaototal[1]=10020;
    producaototal[2]=20010;
    producaototal[3]=30030;
    producaototal[4]=4040;
    producaototal[5]=20050;
    producaototal[6]=30060;
    producaototal[7]=4030;
    producaototal[8]=50060;
    producaototal[9]=2020;
    producaototal[10]=30400;
    producaototal[11]=4500;
    producaototal[12]=5800;
    
    data[1]=102021;
    data[2]=102022;
    data[3]=102023;
    data[4]=102024;
    data[5]=102025;
    data[6]=102026;
    data[7]=102027;
    data[8]=102028;
    data[9]=102029;
    data[10]=103021;
    data[11]=020211;
    data[12]=020212;

    
    int contaux,contaux2,k,i,l;
    int maiorentrega;
    int maiorcpf[13], maiortelefones[13], maiorinsumos[13],maiorproducaototal[13],maiordata[13];
    float maiorproducaototalbonus[10],promocao;
    char *maiornome[13],*maiorendereco[13];
 
    maiorentrega=-100000;
    contaux2=1;

    
    for (k = 1; k <= 13; k++){
        for (i = 1; i <= 13; i++){
            if(insumos[i]>maiorentrega){
                    maiorentrega=insumos[i];
                    contaux=i;
                }
            }
        printf(" %d ",maiorentrega);
        maiorcpf[contaux2]=cpf[contaux];
        maiortelefones[contaux2]=telefones[contaux];
        maiorinsumos[contaux2]=maiorentrega;
        maiorproducaototal[contaux2]=producaototal[contaux];
        maiordata[contaux2]=data[contaux];
        maiornome[contaux2]=nomes[contaux];
        maiorendereco[contaux2]=endereco[contaux];
        
        maiorentrega=-100000;
        insumos[contaux]=-100000;
        contaux2=1+contaux2;
    }
    
    promocao=0;
    
    for (k = 2; k <= 11; k++){
        maiorproducaototalbonus[k]=(1.22-(k-1)*0.02)*maiorproducaototal[k];
        promocao=promocao+(((1.22-(k-1)*0.02)*maiorproducaototal[k])-maiorproducaototal[k]);
    }
    printf("\n ----- Os coperados beneficiados -----");
    printf("\n ");
    for (k = 2; k <= 11; k++){
         printf("\n Nome %s CPF %d telefone %d endereco %s insumos %d e produção com bonus R$ %.2f. ",maiornome[k],maiorcpf[k],maiortelefones[k],maiorendereco[k],maiorinsumos[k],maiorproducaototalbonus[k]);
         printf("\n ");
     }
     
    printf("\n O total gasto a mais com a promoção foi de R$ %.2f.",promocao);
    //printf("%s",nomes[2]);
    
    return 0;
}
