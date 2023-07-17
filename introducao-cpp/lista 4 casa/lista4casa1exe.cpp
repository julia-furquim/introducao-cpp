#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(void)
{
      int x1, x2, x3, x4, x5, x6, x7, x8, x9;
      int y1, y2, y3, y4, y5, y6, y7, y8, y9;
      printf("Digite o primeiro digito do RAV: "); scanf("%d", &x1);
      printf("\nDigite o segundo digito do RAV: "); scanf("%d", &x2);
      printf("\nDigite o terceiro digito do RAV: "); scanf("%d", &x3);
      printf("\nDigite o quarto digito do RAV: "); scanf("%d", &x4);
      printf("\nDigite o quinto digito do RAV: "); scanf("%d", &x5);
      printf("\nDigite o sexto digito do RAV: "); scanf("%d", &x6);
      printf("\nDigite o setimo digito do RAV: "); scanf("%d", &x7);
      printf("\nDigite o oitavo digito do RAV: "); scanf("%d", &x8);
      printf("\nDigite o nono digito do RAV: "); scanf("%d", &x9);
      y1=x1;
      y2=x2;
      y3=x8;
      y4=x7;
      y5=x5;
      y6=x6;
      y7=x3;
      y8=x4;
      y9=x9;
      printf("O RA correto dos estudantes sao:%d%d%d%d%d%d%d%d%d", y1, y2, y3, y4, y5, y6, y7, y8, y9);
      getch();
      return(0);
}
