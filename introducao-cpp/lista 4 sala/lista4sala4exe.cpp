#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
int main(){
	int i;
	int A[5] = {0};
	int B[5] = {0};
	int	C[10] = {0};
	printf("\n Digite 5 numeros da matriz A:\n\n");
	for(i=0; i<5; ++i)
	{
		scanf("%i", &A[i]);
		C[i] =A[i];
	} 
	i=0;
	printf("\n Digite 5 valores pro vetor B:\n \n");
	for(i+0; i<5; ++i)
	{
		scanf ("%i", &B[i]);
		C[i+ 5] = B[i];
	}
	i=0;
	printf("\n nos elementos da matriz C: \n \n");
	for (i = 0; i< 10; ++i)
	printf("%i\n", C[i]);
	getch();
	return 0;
}
