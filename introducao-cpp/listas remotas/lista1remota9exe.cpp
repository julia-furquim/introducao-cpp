#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int saldo;
printf("escolha seu saldo banc�rio...\n 1-saldo igual � 1000 \n 2-saldo igual � 3000 \n 3-saldo igual � 5000:");
scanf("%i",&saldo);
switch(saldo){
	case 1: 
	printf("a tarifa foi reduzida em 20 porcento!");break;
	case 2: 
	printf("a tarifa foi reduzida em 25 porcento!");break;
	case 3: 
	printf("a tarifa foi reduzida em 30 porcento!");break;
	case 4: (saldo<0 || saldo!=1000 || saldo!=3000 || saldo!=5000);
	printf("saldo inv�lido");break;
		
}
getch();
return 0;
}
