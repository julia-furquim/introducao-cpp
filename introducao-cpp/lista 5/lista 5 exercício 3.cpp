#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int A[15],B[15],i,x,b,c,n;
	printf("Fatorial dos elementos de um vetor\n");
	c=1;
	for (i=0;i<15;i++)
	{
	printf("insira o %iº valor do vetor:\n",c); 
	scanf("%i", &A[i]);
	c++;
	}
	for (i=0; i<15; i++)
	{
	n=A[i];
	for(B[i]=1; n>1; n=n-1){
	B[i]=B[i]*n;
	}
	}
	for(i=0; i<15; i++)
	for(b=i; b<16; b++)
	{
		if(B[i] > B[b])
		{
		x=B[i];
		B[i]=B[b];
		B[b]=x;
		}
	}
		for(i=0; i<15; i++)
	{
		printf("Os números do vetor em ordem crescente são:%i\n",B[i]);
	}
getch();
}
