#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<strings.h>
int dados();
int calculo();
int x(float pres);
float val;
float tx;
float t;
int main(){
	setlocale(LC_ALL,"portuguese");
	dados();
	calculo();
	return 0;
}
int dados(){
	printf("Insira a prestação:\n");
	scanf("%f",&val);
	printf("Insira a taxa:\n");
	scanf("%f",&tx);
	printf("Insira o tempo:\n");
	scanf("%f",&t);
}
int calculo(){
	float pres;
	pres=val+(val*(tx/100)*t);
	x(pres);
}
int x(float w)
{
	printf("Valor da prestação em atraso:%f\n", w);
}
