#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	printf("IMPARES\t PARES\n");
	for(i=1; i<=20; i=i+1){
		if (i%2==1){
		printf("%d \n", i);}
		else{ 
		printf("\t %d\n", i);}}
	return 0;	
