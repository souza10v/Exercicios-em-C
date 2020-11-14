// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>
int main()
{
    char tipo;
    float quilometros,consumo,preco;   
    printf("Informe percurso em quilometros(Km): ");
    scanf("%f", &quilometros);
    printf("Tipos de carro: \n");
    printf("Tipo A - 8Km/L\nTipo B - 9KM/L\nTipo C - 12KM/L\n");
    printf("Insira o tipo de carro (A,B ou C): ");
    scanf ("%s", &tipo);
    printf("Insira o valor do litro de combustível: ");
    scanf("%f", &preco);
    
    if (tipo == 'A'){
        consumo=quilometros/8;
    }
    else if (tipo == 'B') {
        consumo=quilometros/9;
    }
    else{
        consumo=quilometros/12;
    }
    printf("O cosumo de combustível foi de %.2f litros e o valor estimado da viagem foi de R$%.2f.",consumo,preco*consumo);
    system("pause");
    return 0;
}