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