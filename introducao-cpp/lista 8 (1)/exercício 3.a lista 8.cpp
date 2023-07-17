#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<strings.h>
int N=0;
int calculo(int *cont);
int main(){
	setlocale(LC_ALL,"portuguese");
	int cont;
	printf("\n...soma doseiros N números inteiros...\n");
	printf("insira um número:\n");
	scanf("%i", &cont);
	calculo(&cont);
	printf("a soma dos N números inteiros:%i", N);
	}
	int calculo(int *j){
	for(int i=1; i<=*j; i++){
		N=i+N;
	}
}
