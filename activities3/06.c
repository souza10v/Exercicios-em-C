// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[4];
	char final;

	
	printf("Insira os 4 ultimos números da placa do carro: ");
	scanf("%s",str);
	
    final=str[3];

    switch(final)
    {
        case 0:
        printf("Mês de vencimento é Janeiro.\n");
        break;
        case 1:
        printf("Mês de vencimento é Fevereiro.\n");
        break;
        case 2:
        printf("Mês de vencimento é Março.\n");
        break;
        case 3:
        printf("Mês de vencimento é Abril.\n");
        break;
        case 4:
        printf("Mês de vencimento é Maio.");
        break;
        case 5:
        printf("Mês de vencimento é Junho.");
        break;
        case 6:
        printf("Mês de vencimento é Julho.");
        break;
        case 7:
        printf("Mês de vencimento é Agosto.");
        break;
        case 8:
        printf("Mês de vencimento é Setembro.");
        break;
        case 9:
        printf("Mês de vencimento é Outubro.");
        break;
    }
    return 0;
}