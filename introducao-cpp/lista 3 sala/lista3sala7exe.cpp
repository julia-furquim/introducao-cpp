#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int j;
	float f;
	for(j=0; j<=15; j++){
    f=pow (3,j);
    printf("o numero 3 elevado %i é: %.0f\n", j, f);
	}
	system("pause");
	return 0;
}
