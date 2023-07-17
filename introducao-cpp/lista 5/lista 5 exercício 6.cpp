#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int A[30], B[30],pesq, acha, i;
	char resp;
	setlocale(LC_ALL,"portuguese");
	for(i=0;i<30;i++){
		printf("insira o %d valor:",i+1);
		fflush(stdin); scanf("%d", &A[i]);
	}
		for(i=0;i<30;i++){
	B[i]=A[i]*A[i]*A[i];
	}
	while(resp=='s' || resp=='S') {
		printf("insira o valor que você deseja pesquisar:");
		fflush(stdin); scanf("%i",&pesq);
		i=0;
		acha=0;}
		while(i<=30 && acha==0);{
			if(pesq==A[i] || pesq==B[i])
			acha=1;
			else
			i+=1;
			if(acha==1)
			printf("o valor %d foi localizado no índice %d\n", pesq, i+1);
			else
			printf("%d inválido!!\n");
			printf("\n gostaria de continuar a pesquisa? [s]im / [n]ão + <enter>");
			fflush(stdin); resp=getchar();
		}
		
	return 0;
}
