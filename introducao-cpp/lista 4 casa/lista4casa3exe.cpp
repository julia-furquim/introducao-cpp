#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
	int RA [10], RAN[10], y, x;
	y=1;
	x=0;
	for( int i=0; i<9; i++)
	{
		printf("Entre com o %i numero de RA:", y);
		scanf("%i", &RAN [x]);
		y++;
		x++;
	}
      RA[0]=RAN[1];
      RA[1]=RAN[0];
      RA[2]=RAN[2];
      RA[3]=RAN[3];
      RA[4]=RAN[4];
      RA[5]=RAN[5];
      RA[6]=RAN[6];
      RA[7]=RAN[7];
      RA[8]=RAN[8];
      printf("CALCULANDO O NOVO RAN:%i%i%i%i%i%i%i%i%i", RAN [1], RAN[0], RAN[2], RAN[3], RAN[4], RAN[5], RAN[6], RAN[8], RAN[7]);
      getch();
      return(0);
  }
