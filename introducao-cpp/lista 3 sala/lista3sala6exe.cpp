#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
	int i;
	setlocale(LC_ALL,"portuguese");
	for(i=15; i<=200; i++){
		printf("\n O quadrado de %i n�mero � %i:", i, i*i);
	}
	getch();
	return 0;
}
