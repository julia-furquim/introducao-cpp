#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int A[40],c,i,b,x,p,a;
	char res;
	c=1;
	for (i=0;i<40;i++)
	{
	printf("Entre a %iº nota\n---->",c); 
	scanf("%i", &A[i]);
	c++;
	}
	for(i=0; i<40; i++)
	for(b=i; b<41; b++)
	{
		if(A[i] > A[b])
		{
		x=A[i];
		A[i]=A[b];
		A[b]=x;
		}
	}
	res='s';
	while(res=='s' || res=='S'){
	printf("\nqual nota você deseja pesquisar?\n");
	scanf("%i", &p);
	i=0;
	a=0;
	while(a==0){
		if (p==A[i]){
			a=1;
		}
		else{
			i++;
		}
		if (a==1){
			printf("a nota %i está na posição %i\n",p,i);
			res=getchar();
		}
		if(a==0 && i==30){
			printf("a nota %i não foi encontrada\n",p);
			printf("\nGostaria de continuar a pesquisa? [S]/[N]\n---->");
			scanf("%i", &res); 
		}
	}
	
}
getch();
return 0;
}
