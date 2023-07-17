#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
#include<strings.h>
int a[30], b[30], c[60], i=1;
int entraA();
int entraB();
int juncao();
int exibir(int *z);
int main(){
	entraA();
	entraB();
	juncao();
	return(0);
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
	printf("\n A Matriz C:\n");
	for(i=0; i<60; i++){
	int z=c[i];
	exibir(&z);
}
}
int exibir(int *w)
{
	printf("\n%i\n", *w);
	}

