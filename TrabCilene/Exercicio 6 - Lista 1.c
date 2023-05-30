/******************************************************************************
Ryan dos Santos Cirilo
15.02.2023
*******************************************************************************/
#include <stdio.h>

int main()
{
    int maca;
    float valorMaca, valorTotal;

    printf("Digite o total de macas compradas: \n");
    scanf("%d", &maca);

    if(maca < 12)
        valorMaca = 1.30;
    else valorMaca = 1.00;

    valorTotal = valorMaca * maca;
    printf("O valor das macas e: %.2f", valorTotal);

    return 0;
}