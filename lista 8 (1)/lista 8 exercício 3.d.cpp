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
	printf("\n...Insira um número...:\n");
	scanf("%i", &i); fflush(stdin);
	printf("...Insira a potência do número inserido...:\n");
	scanf("%i", &j); fflush(stdin);
	calculo(&i, &j);
}
int calculo(int *x, int *y){
	z=pow(*x, *y);
}
int exibir(){
	printf("...A potencialização é %d!!!...\n\n",z);
}
