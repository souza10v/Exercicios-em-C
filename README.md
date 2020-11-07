<p> teste </p>


```C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* . 1 - Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de
um cilindro circular é calculado por meio da seguinte fórmula: V = 𝜋 ∗ 𝑟𝑎𝑖𝑜2∗ 𝑎𝑙𝑡𝑢𝑟𝑎, onde𝜋 = 3,141592 .*/

int main() {
    float base, altura, area;
    printf("Insira a base do triângulo: ");
    scanf("%f", &base);
    printf("Insira a altura do triângulo: ");
    scanf("%f", &altura);
    area = (base*altura)/2;
    printf("A área é %.2f", area);
    system("pause");
    return 0;
}
```

2
```C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num;
    printf("Insira um número inteiro: ");
    scanf("%d",&num);
    printf("O próximo número é %d e o antecessor é %d .",num-1,num+1);
    system("pause");
    return 0;
}
```

3
```C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float valor;
    printf("Qual o valor gasto no restaurante?");
    scanf("%f", &valor);
    printf("O valor gasto no total %.2f", valor*1.1);
    system("pause");
    return 0;
}
```

4
```C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float salario, quantidade_quiliowatts;
    printf("Qual o valor do sálario mínimo: ");
    scanf("%f", &salario);
    printf("Quantidade de quilowatts: ");
    scanf("%f", &quantidade_quiliowatts);
    printf("O valor de cada quilowatt hora é %.2f reais. ", salario/7);
    printf("O valor pago na conta é %.2f reais.", salario/7*quantidade_quiliowatts);
    printf("O novo valor a ser pago com desconto de 10% é %.2f reais.", salario/7*quantidade_quiliowatts*0.9);
    system("pause");
    return 0;
}
```

5 
```C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float preco,lucro,impostos,precof,aux1,aux2;
    printf("Insira o preço do carro: ");
    scanf("%f", &preco);
    printf("Insira o percentual de lucro: ");
    scanf("%f", &lucro);
    printf("Insira o taxa de impostos: ");
    scanf("%f", &impostos);
    precof=preco*(1+(lucro/100))*(1+(impostos/100));
    aux1=precof*(lucro/100);
    aux2=precof*(impostos/100);
    printf("O lucro do distribuidor é %f reais.\n",aux1);
    printf("O valor correspondente em impostos é %f reais.\n",aux2);
    printf("O preço final do veículo é %f reais.",precof);
    system("pause");
    return 0;
}
```

6
```C
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
```

7
```C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float temperaturac,temperaturaf;
    printf("Insira a tempetura em Fahrenheit: ");
    scanf("%f",&temperaturaf);
    temperaturac=(temperaturaf-32)*5/9;
    printf("A temperatura em celsius é %.2f .",temperaturac);
    system("pause");
    return 0;
}
```

8 
```C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float cato,cata;
    printf("Insira o cateto oposto: ");
    scanf("%f",&cato);
    printf("Insira o cateto adjacente: ");
    scanf("%f",&cata);
    printf("A hipotenusa é %.2f",sqrt(pow(cato,2) +pow(cata,2) ));
    system("pause");
    return 0;
}
```

9 
```C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float raio,altura;
    printf("Insira o raio da lata de óleo: ");
    scanf("%f",&raio);
    printf("Insira a altura: ");
    scanf("%f",&altura);
    printf("O volume da lata de óleo é %.2f", 3.14159*pow(raio,2)*altura);
    system("pause");
    return 0;
}
```

10
```C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float salario,vendas;
    printf("Insira o salário fixo: ");
    scanf("%f",&salario);
    printf("Insira o valor da vendas: ");
    scanf("%f",&vendas);
    printf("A comissão de vendas é R$%.2f, o desconto é R$%.2f e o salário líquido R$%.2f .", vendas*0.04, (salario+vendas*0.04)*0.0225, (salario+vendas*0.04)*0.9775);
    system("pause");
    return 0;
}
