#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	int ano;
	printf("digite um ano com quatro digitos:");
	scanf("%i",&ano);
	system("cls");
	setlocale(LC_ALL,"portuguese");
	if (ano%4==0 && ano%100!=0){
		printf("o ano é bissexto!!!:%i", ano);}
	else{
	printf("o ano não é bissexto!!!:%i",ano);}
	getch ();
	return 0;}
