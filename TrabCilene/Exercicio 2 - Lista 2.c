/******************************************************************************
Ryan dos Santos Cirilo
08.03.2023
*******************************************************************************/

#include <stdio.h>
#define TAM 8

void main()
{
    int v[TAM], x, y, soma;
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite um valor v[%d]: \n", i);
        scanf("%d", &v[i]);
    }

    printf("Digite o valor da primeira posição: \n");
    scanf("%d", &x);
    while (x < 0 || x >= TAM)
    {
        printf("Valor invalido. Digite outro valor: \n");
        scanf("%d", &x);
    }
    printf("Digite o valor da segunda posição: \n");
    scanf("%d", &y);
    while (y < 0 || y >= TAM)
    {
        printf("Valor invalido. Digite outro valor: \n");
        scanf("%d", &y);
    }

    soma = v[x] + v[y];
    printf("A soma dos dois valores é: %d", soma);
}