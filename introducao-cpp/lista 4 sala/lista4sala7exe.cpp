#include<conio.h>
#include<stdio.h>
#include<locale.h>

int main(void)
{
  int A[10], B[10],CONT;
  
  printf("\n");
  for (CONT = 0; CONT <=  9; CONT++)
  {
    printf("Informe o elemento nr. %d de A : ",(CONT + 1) );
    scanf("%d",&A[CONT]);
  }
  
  for (CONT = 0; CONT <= 9; CONT++)
  {
    B[CONT] = A[9 - CONT];
  }
  printf("\n");
  for (CONT = 0; CONT <= 9; CONT++)
  {
    printf("A[%d] = %d , B[%d] = %d \n",(CONT + 1),A[CONT],(CONT + 1),B[CONT]);
  }
  
  return(0);
}
