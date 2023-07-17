#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<strings.h>
int N;
int calculo(int w);
int main(){
	setlocale(LC_ALL,"portuguese");
	int w;
	printf("\nInsira um número:\n");
	scanf("%i", &w);
	calculo(w);
	printf("\nA soma dos Números é igual à:%i\n",N);
}
int calculo(int j){
	for(int i=1; i<=j; i++){
	N=i+N;	
	}
}
