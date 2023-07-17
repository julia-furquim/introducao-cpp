#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int A[8],B[8],i,a;
	for(i=0;i<8;i++){
	printf("insira os valores do vetor A:\n");
	fflush(stdin); scanf("%i",&A[i]);
   }
   for(i=0; i<8; i++){
   		B[i]=A[i]*5;
   }
 	for(i=0;i<8;i++)
	for(a=i+1;a<8;a++)
	{
		if(B[i] > B[a]){
		}
	}
	for(i=0; i<8; i++){
		printf("Os valores do vetor B são:%i\n", B[i]);
	}
	getch();
	return 0;
	
}
