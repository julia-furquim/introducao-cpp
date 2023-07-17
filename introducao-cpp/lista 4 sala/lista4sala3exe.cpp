#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
	int i=0;
	int A[5], B[5] ,C[5];
	for(i=0; i<5; ++i) 
	{
		printf("Digite 5 numeros da matriz a:\n\n");
		scanf("%d",&A[i]);
	}
		for(i=0;i<5; i++) 
		{
			printf("Digite 5 numeros da matriz b:\n\n");
			scanf("%d",&B[i]);
			i++;
		}
		i=0;
		for (i=0; i<5; i++)

		i=0;
		for(i=0; i<5; i++){
			C[i]= A[i]- B[i];
				printf("a matriz de c eh:%d\n", C[i]);
				i++;
		}
	    getch();
return 0;
}
