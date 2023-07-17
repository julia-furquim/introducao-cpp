#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
      int RA0, RA1, RA2, RA3, RA4, RA5, RA6, RA7 ,RA8;
      int RAN0, RAN1, RAN2, RAN3, RAN4, RAN8, RAN7, RAN6, RAN5;
      printf("Digite o primeiro digito do RA: "); scanf("%d", &RAN0);
      printf("\nDigite o segundo digito do RA: "); scanf("%d", &RAN1);
      printf("\nDigite o terceiro digito do RA: "); scanf("%d", &RAN2);
      printf("\nDigite o quarto digito do RA: "); scanf("%d", &RAN3);
      printf("\nDigite o quinto digito do RA: "); scanf("%d", &RAN4);
      printf("\nDigite o sexto digito do RA: "); scanf("%d", &RAN5);
      printf("\nDigite o setimo digito do RA: "); scanf("%d", &RAN6);
      printf("\nDigite o oitavo digito do RA: "); scanf("%d", &RAN7);
      printf("\nDigite o nono digito do RA: "); scanf("%d", &RAN8);
      RA=[0]=RAN[0];
      RA=[1]=RAN[1];
      RA=[2]=RAN[2];
      RA=[3]=RAN[3];
      RA=[4]=RAN[4];
      RA=[5]=RAN[8];
      RA=[6]=RAN[7];
      RA=[7]=RAN[6];
      RA=[8]=RAN[5];
      printf("CALCULANDO O NOVO RA:%d%d%d%d%d%d%d%d%d", RAN0, RAN1, RAN2, RAN3, RAN4, RAN8, RAN7, RAN6, RAN5);
      getch();
      return(0);
  }
