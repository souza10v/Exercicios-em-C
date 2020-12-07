// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor, pagamento;
    printf("Insira o valor da compra ");
    scanf("%f", &valor);
    printf("Escolha o código de pagamento:\n ");
    printf("1 à vista em dinheiro ou cheque → 10%% de desconto; \n ");
    printf("2 à vista no cartão de débito → 7,5%% de desconto;\n ");
    printf("3 à vista no cartão de crédito → 5 %% de desconto;\n");
    printf("4 em duas vezes → preço normal de tabela sem juros;\n ");
    printf("5 em quatro vezes → preço normal de tabela mais juros de 9,5%%;\n" );
    scanf("%f", &pagamento);
    
    if (pagamento == 1)
    {
        printf("O valor de pagamento é R$ %.2f ", valor*0.9);
    }
    else if (pagamento == 2){
        printf("O valor de pagamento é R$ %.2f ", valor*0.935);
    }
    else if(pagamento == 3){
        printf("O valor de pagamento é R$ %.2f ", valor*0.95);
    }
    else if(pagamento == 4){
        printf("O valor de pagamento é em 2 vezes de R$ %.2f ", valor/2);
    }
    else if(pagamento == 5){
        printf("O valor de pagamento é em 4 vezes de R$ %.2f ", (valor*1.095)/4);
    }
}