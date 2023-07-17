#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	int A[6] = {0};
	int B[6] = {0};
	int fatorial = 1, i, j;
	printf("Digite 6 numeros:\n\n");
	for(i=0; i<6; ++i) 
	{
		scanf("%i", &A [i]);
		for(A[i]; A[i] >= 1; --A [i]) {
			fatorial*= A[i];
		}
		B[i]= fatorial;
		fatorial=1;
		
	}
	printf("\nos elementos do vetor B sao:\n\n");
	for(i =0; i<6; i++){
		printf("%i\n", B[i]);
	}
	return 0;
}
