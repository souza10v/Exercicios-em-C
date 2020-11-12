/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    float l1, l2, l3;
    printf("Insira o primeiro lado: ");
    scanf("%f", &l1);
    printf("Insira o segundo lado: ");
    scanf("%f", &l2);
    printf("Insira o terceiro lado: ");
    scanf("%f", &l3);
    if ((l1< l2+l3) && (l2< l1+l3) && (l3<l1+l2))
    {
        printf("É um Triangulo, ");
    }
    if ((l1=!l2) && (l1!=l3) && (l2!=l3))
    {
        printf("Escaleno. ");
    }
    else if ((l1==l2) && (l1==l3) && (l2==l3))
    {
        printf("Equilátero. ");
    }
    else{
        printf("Isóceles.");
    }
    system("pause");
    return 0;
}