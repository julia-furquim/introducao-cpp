#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
int main (){
	int OP;
	float A,B,C,D,E,op,r2,r1,r3,r4,r5,fat,fat2,fat3,fat4,fat5,x1,x2,x3,x4,x5;
	setlocale (LC_ALL,"portuguese");
	printf("insira o primeiro número:\n-");
	scanf("%f",&A);
	printf("insira o segundo número:\n");
	scanf("%f",&B);
	printf("insira o terceiro número:\n");
	scanf("%f",&C);
	printf("insira o quarto número:\n");
	scanf("%f",&D);
	printf("insira o quinto número:\n");
	scanf("%f",&E);
	system("cls");
	x1=sqrt(A);
	x2=sqrt(B);
	x3=sqrt(C);
	x4=sqrt(D);
	x5=sqrt(E);
	r1=A*A*A;
	r2=B*B*B;
	r3=C*C*C;
	r4=D*D*D;
	r5=E*E*E;
	for(fat=1; A>1; A=A-1){
		fat=fat*A;
	}
	for(fat2=1; B>1; B=B-1){
		fat2=fat2*B;
	}
	for(fat3=1; C>1; C=C-1){
		fat3=fat3*C;
	}
	for(fat4=1; D>1; D=D-1){
		fat4=fat4*D;
	}
	for(fat5=1; E>1; E=E-1){
		fat5=fat5*E;
	}
	printf("MENU DE OPCOES: \n 1-cálculo da raiz quadrada \n 2-cálculo da potência de 3 \n 3-cálculo do fatorial :\n");
	scanf("%i",&OP);
	switch (OP){
	case 1:
	printf("\n você escolheu opção 1, e o resultado é:%.1f, %.1f, %.1f, %.1f, %.1f\n",x1,x2,x3,x4,x5);break;
	case 2:
	printf("\n você escolheu opção 2, e o resultado eh:%.1f, %.1f, %.1f, %.1f, %.1f\n",r1,r2,r3,r4,r5);break;
	case 3:
    printf("\n você escolheu opção 3, e o resultado eh:%.1f, %.1f, %.1f, %.1f, %.1f\n",fat ,fat2,fat3,fat4,fat5);break;
	}
	getch();
	return 0;
	
}
