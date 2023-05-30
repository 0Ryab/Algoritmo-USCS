/*******************************************************************************
Ryan dos Santos Cirilo
29.03.2023
*******************************************************************************/

#include <stdio.h>

int posicaoMaior(int, int, int);

int main(){

	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("O maior numero esta na posicao %d", posicaoMaior(a, b, c));

	return 0;
}

int posicaoMaior(int a, int b, int c){
	if(a>b && a>c)
		return 1;
	else if(b>a && b>c)
		return 2;
	else
		return 3;
}