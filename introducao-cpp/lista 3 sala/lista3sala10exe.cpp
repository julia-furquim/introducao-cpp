#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
	int i, soma;
	setlocale(LC_ALL,"portuguese");
	for(i=1; i<=500; i++)
    if (i%2==0){
    	soma=soma+i;}
    	printf("\n a somat�ria dos  n�meros pares � %i", soma);
    getch();
	return 0;
}
