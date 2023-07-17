#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main()
{
	int X1,res,X2,X3;
	setlocale(LC_ALL,"portuguese");
	do{
	printf("\n deseja começar o quiz? [1-S/0-N]\n------>");
	scanf("%i", &res);
	printf("Qual time nao tem mundial?\n 1.Palmeiras \n 2. cruzeiro\n 3. Santos \n 4. '-'\n------>");
	scanf("%i", &X1);
	printf("Qual é o time que caiu serie?\n 1.America-mg\n 2. não sei\n 3. Vasco\n 4. '-'\n------>");
	scanf("%i", &X2);
	printf("Qual é o maior classico do Brasil?\n 1.Palmeiras e corinthians .\n 2. não sei\n 3. sao paulo e santos \n 4. '-'\n------>");
	scanf("%i", &X3);
	if (X1==1 && X2==1 && X3==1)
	printf("nenhum erro detectado :)");
	if (X1==1 && X2==1 && X3!=1)
	printf("um erro detectado");
	if (X1==1 && X2!=1 && X3==1)
	printf("um erro detectado");
	if (X1!=1 && X2==1 && X3==1)
	printf("um erro detectado");
	if (X1==1 && X2!=1 && X3!=1)
	printf("Dois erros detectados");
	if (X1!=1 && X2==1 && X3!=1)
	printf("Dois erros detectados");
	if (X1!=1 && X2!=1 && X3==1)
	printf("Dois erros detectados");
	if (X1!=1 && X2!=1 && X3==1)
	printf("Dois erros detectados");
	if (X1!=1 && X2!=1 && X3!=1)
	printf("Três erros detectados :(");
}while(res==1);

getch();
return 0;
}
