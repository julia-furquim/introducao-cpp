#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int i=0;
	while (i<=20){
	if (i%2==0){
	printf("%i eh par\n", i);
	i=i+2;}}
	while (i<=20){
	if (i%2!=0){
	printf("%i eh impar\n", i);
	i=i+2;}}
	getch ();
	return 0;}
