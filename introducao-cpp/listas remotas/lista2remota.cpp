#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int c, b, d, pagamento;
	printf("MENU DE OP��ES: \n 1-cart�o \n 2-boleto \n 3-d�bito:\n");
	scanf("%i",&pagamento);
	switch(pagamento){
	case 1:		
	printf("o pagamento ser� realizado no cart�o!");break;		
	case 2:
	printf("o pagamento ser� realizado no boleto!");break;
	case 3:
	printf("o pagamento ser� realizado no d�bito!");break;
	case 4:
	printf("op��o inv�lida!!!");
	}
	getch();
	return 0;
}
