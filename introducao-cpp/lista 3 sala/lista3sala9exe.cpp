#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	int n, m, p;
	setlocale(LC_ALL,"portuguese");
	printf("insira o valor da base:");
	scanf("%i",&n);	
	printf("insira o valor do expoente:");
	scanf("%i",&m);
	p=m*n;
	printf("a potência é:%i", p);
	getch();
	return 0;
}

