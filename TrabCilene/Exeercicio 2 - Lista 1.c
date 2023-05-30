/******************************************************************************
Ryan dos Santos Cirilo
29.03.2023
*******************************************************************************/

#include <stdio.h>

int muda(int);
int muda2();

int main()
{
	int n = 5;
	printf("\nn = %d antes da chamada de muda", n);
	n = muda(n);
	printf("\nn = %d depois da chamada de muda", n);
	printf("\n\n\n");
	n = 5;
	printf("\nn = %d antes da chamada de muda2", n);
	muda2();
	printf("\nn = %d depois da chamada de muda2", n);
	return 0;
}

int muda(int n)
{
	n = 10;
	printf("\nn = %d dentro da funcao muda", n);
	return n;
}

int muda2()
{
	int n = 10;
	printf("\nn = %d dentro da funcao muda2", n);
}
