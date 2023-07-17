//Ler 12 elementos em uma matriz A tipo vetor. Após sua leitura, colocar os seus elementos em ordem crescente. 
//Depois ler uma matriz B também com 12 elementos. Colocar os elementos de B em ordem crescente. Criar uma matriz C, 
//onde cada elemento de C é a soma do elemento correspondente de A com B. Colocar em ordem crescente a matriz C e 
//apresentar os seus valores.
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int A[12], B[12],C[12],i,x,w;
	setlocale(LC_ALL,"portuguese");
	for(i=0;i<12;i++){
		printf("Insira os valores do vetor A:\n");
		fflush(stdin); scanf("%i",&A[i]);
	}
	for(i=0;i<12;i++)
	for(w=0;w<12;w++){
		if(A[i] < A[w]){
			x=A[i];
		A[i]=A[w];
			A[w]=x;
	}
}
for(i=0;i<12;i++){
		printf("Insira os valores do vetor B:\n");
		fflush(stdin); scanf("%i",&B[i]);
	}
	for(i=0;i<12;i++)
	for(w=0;w<12;w++){
		if(B[i] < B[w]){
			x=B[i];
		B[i]=B[w];
			B[w]=x;
	}
}
for(i=0;i<12;i++){
	C[i]=A[i]+B[i];
	printf("A matriz C é:%i\n");
}
getch();
return 0;
}
