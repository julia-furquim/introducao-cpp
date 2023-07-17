#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int c, b, d, pagamento;
	printf("MENU DE OPÇÕES: \n 1-cartão \n 2-boleto \n 3-débito:\n");
	scanf("%i",&pagamento);
	switch(pagamento){
	case 1:		
	printf("o pagamento será realizado no cartão!");break;		
	case 2:
	printf("o pagamento será realizado no boleto!");break;
	case 3:
	printf("o pagamento será realizado no débito!");break;
	case 4:
	printf("opção inválida!!!");
	}
	getch();
	return 0;
}
