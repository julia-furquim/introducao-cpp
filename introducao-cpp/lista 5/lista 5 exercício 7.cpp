//Ler 20 elementos em uma matriz A tipo vetor e criar uma matriz B de mesma dimensão, com os mesmos elementos de A 
//acrescentados de mais 2. Colocar os elementos da matriz B em ordem crescente. Montar uma rotina de pesquisa, para 
//pesquisar os elementos armazenados na matriz B.
#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	int A[20],B[20],i,w,pesq,x,a;
	setlocale(LC_ALL,"portuguese");
	for(i=0;i<20;i++){
		printf("Insira os valores da matriz A:\n");
		fflush(stdin); scanf("%i",&A[i]);
	}
	for(i=0;i<20;i++){
		B[i]=A[i]+2;
	}
	for(i=0;i<20;i++)
	for(w=i+1;w<=11;w++){
		if(B[i] > B[w]){
			x=B[i];
			B[i]=B[w];
			B[w]=x;
		}
	}

		printf("digite o valor que deseja pesquisar:\n");
		fflush(stdin); scanf("%i",&pesq);
	
	while(i<20 && a==0);{
			if(pesq==B[i])
			a=1;
			else
			i+=1;
			if(a==1)
			printf(" Matriz B é %d e o valor %d foi localizado no índice %d\n", B[i], pesq, i+1);

	}
	getch();
	return 0;
}


