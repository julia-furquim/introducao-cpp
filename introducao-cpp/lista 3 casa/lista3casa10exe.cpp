#include<conio.h>
#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
int main ( int argc, char *argv[]){
	setlocale(LC_ALL,"Portuguese");
	float A,B,R;
	char op;
	do{ 
	printf("escolha uma das operacoes: +,-,*,/,S:\n");
	scanf("%c",&op);
	switch (op){
		case '*':
		    printf("insira um valor:");
		    scanf("%f",&A);
		    printf("insira um valor:");
		    scanf("%f",&B);
		    R=A*B;
		    printf("o resultado da multiplicacao eh esse:%4.f\n", R); break;
		case '+':
			printf("insira um valor:");
			scanf("%f",&A);
			printf("insira um valor:");
			scanf("%f",&B);
			R=A+B;
			printf("o resultado da adicao eh esse: %4.f\n", R); break;
		case '/':
			printf("insira um valor:");
			scanf("%f",&A);
			printf("insira um valor:");
			scanf("%f",&B);
			R=A/B;
			printf("o resultado da divisao eh esse:%4.f\n", R); break;
		case '-':
			printf("insira um valor:");
			scanf("%f",&A);
			printf("insira um valor:");
			scanf("%f",&B);
			R=A-B;
			printf("o resultado da subtracao eh esse :%4.f\n", R); break;}}
		while (op!='S');{
		printf("programa encerrado!!!");}
			return 0;
}
