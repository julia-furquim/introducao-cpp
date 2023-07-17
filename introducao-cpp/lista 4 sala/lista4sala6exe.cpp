#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	int A[20],B[30],C[50],i,x,b,w,j;
	w=1;
	for (i=0;i<20;i++)
	{
	printf("Insira o %iº valor da matriz A:",w); 
	scanf("%i", &A[i]);
	w++;
	}
	w=1;
	for (i=0;i<30;i++)
	{
	printf("Insira o %iº valor da matriz B:",w); 
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
	for(i=0;i<50;i++){
		printf("A matriz C é %d\n",C[i]);
	}
	getch();
	return 0;
}
