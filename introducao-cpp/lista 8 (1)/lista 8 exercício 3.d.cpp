#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
#include<strings.h>
#include<stdlib.h>
int entravalor();
int calculo(int *i, int *j);
int z;
int exibir();
int main(){
	setlocale(LC_ALL,"portuguese");
	entravalor();
	exibir();
	return(0);
}
int entravalor(){
	int i, j;
	printf("\n...Insira um n�mero...:\n");
	scanf("%i", &i); fflush(stdin);
	printf("...Insira a pot�ncia do n�mero inserido...:\n");
	scanf("%i", &j); fflush(stdin);
	calculo(&i, &j);
}
int calculo(int *x, int *y){
	z=pow(*x, *y);
}
int exibir(){
	printf("...A potencializa��o � %d!!!...\n\n",z);
}
