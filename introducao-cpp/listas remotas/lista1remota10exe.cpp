#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	int A;
	printf("----------------\n   Banco  ifsp  \n----------------\n 1. dep�sito\n 2. saque\n 3. extrato\n 4. transfer�ncia\n----------------\n E = encerrar\n----------------\nSua escolha:");
    scanf("%i", &A);
	if (A==1){
	printf("Opera��o de dep�sito");
	}if (A==2){
	printf("Opera��o de saque");
	}if (A==3){
	printf("Opera��o de extrato");
	}if (A==4){
	printf("Opera��o de transfer�ncia");
	}if (A>5)
	printf("encerrando opera��es...");
getch();
return 0;
}

