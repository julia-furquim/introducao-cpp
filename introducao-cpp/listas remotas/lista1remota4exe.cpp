#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(int argc, char *argv[]){
	int mes, ano, dias=31;
	printf("digite o mes [1-12]:");
	scanf("%i",&mes);
	printf("digite o ano:");
	scanf("%i",&ano);
	do {
	 switch(mes){
	 	case 2: dias-=3; break;
	 	case 4: dias--; break;
		case 6: dias--; break;
		case 9: dias--; break;
		case 11: dias--; break;}
		printf("o mes %.0i possui:%.0i dias \n", mes,dias);}
		while(mes<=12 && mes>=1 && dias>=1 && dias<=31);
	do {
		switch(mes){
	 	case 2: dias-=2; break;
	 	case 4: dias--; break;
		case 6: dias--; break;
		case 9: dias--; break;
		case 11: dias--; break;}
		printf(" o ano %.0i eh bissexto o mes %.0i possui %.0i dias \n", ano,mes,dias);}
		while(mes<=12 && mes>=1 && ano%4==0 && ano%100!=0 && ano%400==0);
	getch ();
	return 0;} 
