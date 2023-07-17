#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	float A,B,C,x1,x2,x3;
	setlocale(LC_ALL,"portuguese");
	printf("insira o valor de A,B e C.\n");
	printf("A:");
	scanf("%f",&A);
	printf("B:");
	scanf("%f",&B);
	printf("C:");
	scanf("%f",&C);
	system("cls");
	x1=A*A;
	x2=B*B;
	x3=C*C;
	printf("o quadrado desse número corresponde à: %f\n ",x1);
	printf("o quadrado desse número corresponde à: %f",x2);
	if (x3>=1000) system ("pause");
	else { 
	printf("\n o quadrado desse número corresponde à:%f", x3);
	}
	getch();
	return 0;
	
}
