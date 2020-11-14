// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


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