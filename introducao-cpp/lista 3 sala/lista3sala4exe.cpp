#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	int n, i;
	setlocale( LC_ALL, "Portuguese" );
	printf("insira um numero igual ou menor que 50:");
	scanf("%d",&n);
	system("cls");
	if (n<=50){
		for(i=n; i<250; i=i*3)
		printf("\n %d \n", i);
	} else {
		printf("erro: o valor inserido eh maior que 50!!!");
	}
	getch();
	return 0;
}
