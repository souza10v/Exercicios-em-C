// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>
int main()
{
    float venda;   
    printf("Insira o valor da venda: ");
    scanf("%f", &venda);
    
    if (venda<10){
        printf("O valor da venda é de R$ %.2f.",venda*1.7);
    }
    else if (venda >= 10 && venda < 30){
        printf("O valor de venda é de R$ %.2f.",venda*1.5);
    }
    else if (venda >= 30 && venda < 50){
        printf("O valor de venda é de R$ %.2f.",venda*1.4);
    }
    else{
        printf("O valor de venda é de R$ %.2f.",venda*1.3);  
    }
    system("pause");
    return 0;
}