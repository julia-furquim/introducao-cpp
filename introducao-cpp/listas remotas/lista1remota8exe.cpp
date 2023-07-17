#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main()
{
	
	int P1, P2, M,M2;
	printf("Insira a primeira nota:");
	scanf("%i", &P1);
	printf("Insira a segunda nota:");
	scanf("%i", &P2);
	M=(P1+P2);
	M2=M/2;
		if (M2 >= 7){
		textcolor(RED);
		printf("O aluno foi aprovado!!");
	}
		if (M2 <= 3){
		textcolor(GREEN);
		printf("O aluno foi reprovado!!");
	}
		if (M2>3 && M2<7){
		textcolor(YELLOW);
		printf("O aluno está de recuperação!!");
	}
getch();
return 0;
}
