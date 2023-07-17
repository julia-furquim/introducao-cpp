#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	int A;
	printf("----------------\n   Banco  ifsp  \n----------------\n 1. depósito\n 2. saque\n 3. extrato\n 4. transferência\n----------------\n E = encerrar\n----------------\nSua escolha:");
    scanf("%i", &A);
	if (A==1){
	printf("Operação de depósito");
	}if (A==2){
	printf("Operação de saque");
	}if (A==3){
	printf("Operação de extrato");
	}if (A==4){
	printf("Operação de transferência");
	}if (A>5)
	printf("encerrando operações...");
getch();
return 0;
}

