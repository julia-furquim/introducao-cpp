#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	float a,b,c;
	setlocale(LC_ALL,"portuguese");
	printf("digite os valores de a, b e c.\n");
	printf("a:");
	scanf("%f",&a);
	printf("b:");
	scanf("%f",&b);
	printf("c:");
	scanf("%f",&c);
	system("cls");
	if ((a*a)==(b*b)+(c*c)){
		printf("triângulo retângulo.:%f",a,b,c);
	}
	else{
		printf("não é triângulo retângulo!!!");
	}
	getch ();
	return 0;}
