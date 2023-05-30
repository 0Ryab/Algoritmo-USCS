/******************************************************************************
Ryan dos Santos Cirilo
01.03.2023
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main() {

    int i, opcao, vetor[6];

    for(i = 0; i < 6; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

            for(i = 5; i >= 0; i--){
                printf("%d", vetor[i]);
            }

    return 0;

}