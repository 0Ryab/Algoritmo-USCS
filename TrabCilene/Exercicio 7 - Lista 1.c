/*******************************************************************************
Ryan dos Santos Cirilo
15.02.2023
*******************************************************************************/
#include <stdio.h>

int main()
{
    float salariofx, valorvenda, comissao, salariofn;
    printf("Digite o salario do funcionario: \n");
    scanf("%f", &salariofx);

    printf("Digite o valor das vendas efetuadas pelo funcionario: \n");
    scanf("%f", &valorvenda);

    if(valorvenda <= 1500)
        comissao = 0.03;
    else comissao = 0.05;

    salariofn = salariofx + comissao * salariofx;

    printf("O salario final do vendedor e de: R$%.2f", salariofn);

    return 0;