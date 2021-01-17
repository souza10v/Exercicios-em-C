// -------------------------------------------------------------------------
// github.com/souza10v
// souza10vv@gmail.com
// -------------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>

int mdc(int x, int y) {
    if (x < y) {
        return mdc(y, x);
    }
    else {
        if (x % y == 0)
            return y;
        else
            return mdc(y, x%y);
    }

}

main()
{
    int x,y;
    printf("Digite n1: ");
    scanf("%d", &x);
    printf("Digite n2: ");
    scanf("%d", &y);

    printf("O MDC é %d", mdc(x,y));
}