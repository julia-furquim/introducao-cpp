//exibir o total da soma obtido dos cem primeiros números inteiros (1+2+3+4+5+.....+97+98+99+100).
#include<conio.h>
#include<stdio.h>
#include<locale.h>
int main(){
	int i,soma;
	setlocale(LC_ALL,"portuguese");
	for(i=1; i<=100; i++)
	soma=soma+i;
	printf("\n  o resultado da soma é:%i", soma);
	getch ();
	return 0;
}

