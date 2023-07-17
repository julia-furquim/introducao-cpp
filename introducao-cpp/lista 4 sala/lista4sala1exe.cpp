#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 6 

int main()
{
	int A[SIZE] ,B[SIZE] ,co;
	setlocale(LC_ALL,"portuguese");
	co=0;
	for (int i=0; i<5; i++)
	{
	printf("Entre com o digito de A\n");
	scanf("%i",&A[co]);
	co++;
	}
	co=0;
	for(int i=0; i<5; i++) 
	{
	B[co]= A[co]*3;
	co++;
	}
	co=0;
	for (int i=0; i<5; i++) {
		printf("O resultado da mutiplicação dos elementos de A por 3 é: %i\n" ,B[co]);
		co++;
	}
	getch();
	return 0;
}
