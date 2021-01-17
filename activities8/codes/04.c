// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <stdio.h>

int horatrabalho(int horat, int horaini){
    int duracaoh;
    duracaoh=horat-horaini;
    return duracaoh;
}
    
int minutotrabalho(int minutot, int minutoini){
    int duracaom;
    if(minutot>minutoini){
        duracaom=minutot-minutoini;
    }
    else if(minutoini>=minutot){
        duracaom=minutoini-minutot;
    }
    return duracaom;
}
    
int segundostrabalho(int segundot, int segundosini){
    int duracaos;
    if(segundot>=segundosini){
        duracaos=segundot-segundosini;
    }
    else if(segundosini-segundot){
        duracaos=segundosini-segundot;
    }
    return duracaos;
}

int main() {
    int numid[1000],horaini[1000],minutoini[1000],segundosini[1000],horat[1000],minutot[1000],segundot[1000];
    int duracaoh[1000],duracaom[1000],duracaos[1000];
    int cont,i;
    
    float salario,valorporsegundo;
    
    printf("\nO turno dos empregados deve ser entre 6 horas e 23 horas.");
    printf("\n ");
    printf("\nInsira o número do empregado: ");
    scanf("%d",&numid[1]);
    printf("Insira a hora de inicio: ");
    scanf("%d",&horaini[1]);
    printf("Insira os minutos de inicio: ");
    scanf("%d",&minutoini[1]);
    printf("Insira os segundos de inicio: ");
    scanf("%d",&segundosini[1]);
    printf("\nInsira a hora de término: ");
    scanf("%d",&horat[1]);
    printf("Insira os minutos de término: ");
    scanf("%d",&minutot[1]);
    printf("Insira os segundos de término: ");
    scanf("%d",&segundot[1]);
    cont=1;
    
    duracaoh[1]=horatrabalho(horat[1], horaini[1]);
    duracaom[1]=minutotrabalho(minutot[1], minutoini[1]);
    duracaos[1]=segundostrabalho(segundot[1], segundosini[1]);
    
    cont=1+cont;  
    
    printf("\nInsira o número do empregado: ");
        scanf("%d",&numid[cont]);
    
    while(numid[cont]>0){
         
        printf("\nInsira a hora de inicio: ");
        scanf("%d",&horaini[cont]);
        printf("Insira os minutos de inicio: ");
        scanf("%d",&minutoini[cont]);
        printf("Insira os segundos de inicio: ");
        scanf("%d",&segundosini[cont]);
        printf("\nInsira a hora de término: ");
        scanf("%d",&horat[cont]);
        printf("Insira os minutos de término: ");
        scanf("%d",&minutot[cont]);
        printf("Insira os segundos de término: ");
        scanf("%d",&segundot[cont]);
        
        duracaoh[cont]=horatrabalho(horat[cont], horaini[cont]);
        duracaom[cont]=minutotrabalho(minutot[cont], minutoini[cont]);
        duracaos[cont]=segundostrabalho(segundot[cont], segundosini[cont]);
        
        cont=1+cont; 
        printf("\nInsira o número do empregado: ");
        scanf("%d",&numid[cont]);
        }
    
    printf("\nInsira o valor do segundo trabalhado: ");
    scanf("%f",&valorporsegundo);
        
    for(i=1;i<=cont;i++){
        
        salario=((duracaoh[i]*60*60)+(duracaom[i]*60)+duracaos[i])*valorporsegundo;

        if (numid[i]>0){
        printf("\nEmpregado número %d, duracao da tarefa %d horas, %d minutos, %d segundos e o valor recebido é R$%.2f.",numid[i], duracaoh[i], duracaom[i], duracaos[i], salario);
        printf("\n ");
        }
    }
        
    return 0;
}
  