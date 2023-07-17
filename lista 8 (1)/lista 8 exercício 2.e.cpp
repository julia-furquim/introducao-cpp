#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
#include<strings.h>
int entravalor();
int classif();
int calculo();
int exibir( int c[12]);
int a[12], b[12], c[12];
int main(){
	setlocale(LC_ALL,"portuguese");
	entravalor();
	classif();
	calculo();
	
}
	entravalor(){
		int i;
		for(i=0; i<12; i++){
			printf("\nInsira os valores da matriz A:\n");
			scanf("%i", &a[i]); fflush(stdin);
		}
		for(i=0; i<12; i++){
			printf("\nInsira os valores da matriz B:\n");
			scanf("%i", &b[i]); fflush(stdin);
	}
}
	classif(){
		int i, j, help;
		for(i=0; i<12; i++)
		for(j=i+1; j<12; j++){
			if(a[i]>a[j]){
				help=a[i];
				a[i]=a[j];
				a[j]=help;
			}
		}
	    for(i=0; i<12; i++)
		for(j=i+1; j<12; j++){
			if(b[i]>b[j]){
				help=b[i];
				b[i]=b[j];
				b[j]=help;
			}
			}
			}
	calculo(){
		int c[12], i, j, help;
		for(int i=0; i<12; i++){
			c[i]=a[i]+b[i];
		}
		for(i=0; i<12; i++)
		for(j=i+1; j<12; j++){
			if(c[i]>c[j]){
				help=c[i];
				c[i]=c[j];
				c[j]=help;
			}
			}
			exibir(c);
	}		
	exibir(int w[12]){
		printf("\nMatriz C:\n");
		for(int i=0; i<12; i++){
			printf("\n%i", w[i]);
		}
		
	}
			

