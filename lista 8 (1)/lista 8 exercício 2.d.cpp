#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
int entravalor();
int potencia();
int exibir();
int main(){
	int x, y, z;
	setlocale(LC_ALL,"portuguese");
	int entravalor();
	{
		printf("...Insira um número...:");
		fflush(stdin); scanf("%d", &x);
		printf("\n...Insira a potência do número inserido...:");
		fflush(stdin); scanf("%d", &y);
	}
	int potencia();
	{
		printf("...Potencialização do número %d e da potência %d...\n\n",x,y);
			z=pow(x,y);
	}
	int exibir();
	{
	printf("...A potencialização é %d!!!...\n\n",z);
	}
	getch();
	return 0;
}
