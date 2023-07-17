#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	int A[20],B[30],C[50],i,x,b,w,j;
	w=1;
	for (i=0;i<20;i++)
	{
	printf("Insira o %iº valor da matriz A:\n",w); 
	scanf("%i", &A[i]);
	w++;
	}
	w=1;
	for (i=0;i<30;i++)
	{
	printf("Insira o %iº valor da matriz B:\n",w); 
	scanf("%i", &B[i]);
	w++;
	}

	for (i=0;i<20;i++)
	{
		C[i]=A[i];
	}
	for (j=0; j<30; i++)
	{
		j++;
		C[i]=B[j];
	}
	for(i=0; i<50; i++)
	for(b=i; b<50; b++)
	{
		if(C[i] > C[b])
		{
		x=C[i];
		C[i]=C[b];
		C[b]=x;
		}
	}
	printf("os numeros em ordem crescente são:\n");
	for(i=0; i<50; i++)
	{
		printf("%i\n",C[i]);
	}
getch();
}
