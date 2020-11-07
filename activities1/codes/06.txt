#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   float num,centena,dezena,unidade;
   printf("Insira o valor de um número no formato CDU (centena-dezena-unidade): ");
   scanf("%f",&num);
   centena=round(num/100);
   dezena=round((num-centena*100)/10);
   unidade=round(num-(centena*100)-(dezena*10));
   printf("O valor da centena é %.0f, o da dezena é %.0f e o da unidade é %.0f.", centena, dezena,unidade );
   system("pause");
   return 0;
}