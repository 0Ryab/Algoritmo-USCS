/******************************************************************************
Ryan dos Santos Cirilo
15.02.2023
*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, y, z;
    char resposta, A, B, C;

    scanf("%d%d", &x, &y);
    z = (x*y) + 5;

    if(z <= 0)
        printf("Z, A");
    else
        if (z <= 100)
            printf("Z, B");
        else printf("Z, C");
}