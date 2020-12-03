// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>

main()
{
    int n1,n2,resto;
    printf("Digite n1: ");
    scanf("%d", &n1);
    printf("Digite n2: ");
    scanf("%d", &n2);
    resto=n1%n2;
      while(resto!=0)
      {
      n1=n2;
      n2=resto;
      resto=n1%n2;         
      }
    printf("O MDC é %d",n2);
}
