#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int num[12],i,w,x;
	printf("Valores de vetor ordenados.\n\n");
	for(i=0;i<11;i++)
	{
		printf("insira o %d� valor:",i);
		fflush(stdin); scanf("%d",&num[i]);
	}
	for(i=0;i<=10;i++)
	for(w=i+1;w<=11;w++)
	{
		if(num[i] < num[w]){
			x=num[i];
			num[i]=num[w];
			num[w]=x;
		}
	}
	for(i=0;i<=11;i++)
	printf("O %d� valor em ordem decrescente �:%d\n",i+1,num[i]);
	getch();
	return 0;
}
