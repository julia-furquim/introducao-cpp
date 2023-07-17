#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
#include<strings.h>
int dados();
int calculo();
int exibir(int ant);
int w;
int main(){
	setlocale(LC_ALL,"portuguese");
	dados();
	calculo();
	return (0);
}
int dados(){
	printf("Insira o tamanho de sua sequência:\n");
	scanf("%i", &w); fflush(stdin);
}
int calculo(){
	int pos;
	int ant=0;
	int atl=1;
	printf("\n Os valores são:");
	while(w>0){
		pos=ant+atl;
		ant=atl;
		atl=pos;
		w--;
		exibir(ant);
	}
}
int exibir(int i){
	printf("%i",i);
}
