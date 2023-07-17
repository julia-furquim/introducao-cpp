#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int numero;
int contador;
int resultado;
int decisao;
int main( int argc, char *argv[] )
{
 setlocale( LC_ALL, "Portuguese" );
  printf("\n Insira a tabuada que deseja saber:");
  scanf("%d", &numero );
  system("cls");
  printf("\n Você quer saber a tabuada de %d?",numero);
 printf("\n 1 - sim \n");
   printf(" 2 - nao \n \n ");
   scanf("%d", &decisao);
 system("cls");
 if(decisao == 1)
  {
   printf("\n --- TABUADA DE %d ----- \n", numero);
   for(contador=0; contador<11 ; contador++)
   {
    resultado =numero*contador;
    printf("\n %d x %d = %d \n", numero, contador, resultado);
  }
 }
 else
 {
  printf("\n TABUADA INVALIDA!!!\n");
 }
  
  return 0;
 }
