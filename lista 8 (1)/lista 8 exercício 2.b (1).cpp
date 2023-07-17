#include<stdio.h>
#include<conio.h>
int a[30], b[30], c[60], i=1;
int entraA();
int entraB();
int juncao();
int exibir();
int main(){
	entraA();
	entraB();
	juncao();
	exibir();
	getch();
}
int entraA()
{
	for(i=0; i<=30; i++){
		printf("insira o %2§ da matriz A:", i+1);
		fflush(stdin); scanf("%d", &a[i]);
	}
}
int entraB()
{
	for(i=0; i<=30; i++){
		printf("insira o %2§ da matriz B:", i+1);
		fflush(stdin); scanf("%d",&b[i]);
	}
}
int juncao()
{
	for(i=0; i<=30; i++){
		c[i]=a[i];
		c[i+30]=b[i];
	}
}
int exibir()
{
	for(i=0; i<=30; i++)
	printf("C[%d]=%d\tC[%d]=%d\n", i, c[i], i+30, c[i+30]);
	}

