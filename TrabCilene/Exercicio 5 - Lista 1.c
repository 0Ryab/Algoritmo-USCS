/******************************************************************************
Ryan dos Santos Cirilo
15.02.2023
*******************************************************************************/
#include <stdio.h>

int main()
{
    int carros; 
    float valor, salario, comissao;

    printf("Digite o salario do funcionario: \n");
    scanf("%f", &salario);

    printf("Digite o numero de carros vendidos: \n");
    scanf("%d", &carros);

    printf("Digite o valor total dos carros vendidos: \n");
    scanf("%f", &valor);

    printf("Digite a comissao por carro: \n");
    scanf("%f", &comissao);

    salario = salario + carros * comissao + 0.05 * valor;

    printf("O salario total do funcionario e: %.1f", salario);

    return 0;
}
