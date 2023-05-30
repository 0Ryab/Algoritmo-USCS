/******************************************************************************
Ryan dos Santos Cirilo
01.03.2023
*******************************************************************************/
#include <stdio.h>

int main(){

    int valores[10], i , numPar = 0;

    printf ("Digite 10 valores inteiros : \n") ;
        for (i =0 ; i < 10 ; i++){
            scanf ("%d", &valores[i]);
        }

    for (i = 0; i < 10; i++){
        if (valores [i] % 2 == 0){
            numPar++;
        }
    }

    printf ("\nExistem: %d numeros pares", numPar);

    return 0;
}