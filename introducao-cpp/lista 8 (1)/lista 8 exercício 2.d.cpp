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
		printf("...Insira um n�mero...:");
		fflush(stdin); scanf("%d", &x);
		printf("\n...Insira a pot�ncia do n�mero inserido...:");
		fflush(stdin); scanf("%d", &y);
	}
	int potencia();
	{
		printf("...Potencializa��o do n�mero %d e da pot�ncia %d...\n\n",x,y);
			z=pow(x,y);
	}
	int exibir();
	{
	printf("...A potencializa��o � %d!!!...\n\n",z);
	}
	getch();
	return 0;
}
