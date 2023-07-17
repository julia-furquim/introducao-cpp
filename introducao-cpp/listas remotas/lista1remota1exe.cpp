#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	float A,B;
	setlocale(LC_ALL, "portuguese");
	printf("entre com os valores de A e B.\n");
	printf("A:");
	scanf("%f",&A);
	printf("B:");
	scanf("%f",&B);
	if (B>A){
		printf("%.0f  valor maior!", B);
	}
	if (A>B){
		printf("%.0f valor maior!", A);
	}
	if (A==B){
		printf("%.0f valores iguais!");
	}
    getch();
    return 0;
}
