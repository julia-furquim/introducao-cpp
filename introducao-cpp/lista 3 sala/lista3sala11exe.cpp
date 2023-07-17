#include<stdio.h>
#include<conio.h>
#include<locale.h>
 int main(){
 int  Max, i;
 setlocale(LC_ALL,"portuguese");
 printf("Digite o tamanho do vetor: ");
 scanf("%d", &Max);
 int vetor[Max];
 int maior, menor, posi, posi2;
 for(i=0; i<Max;  i++){
 printf("Digite o numero do vetor[%d]: ", i+1);
 scanf("%d", &vetor[i]);
 }
 for(i=0;i<Max;  i++){ 
 if(i==0){
 maior=vetor[i];
 menor=vetor[i];
 }else{
 if(menor>vetor[i]){
 menor=vetor[i];      
 posi=i;
 }else{
 if(vetor[i]>maior){
 maior=vetor[i];      
 posi2=i;
 }}}}
 printf("O menor valor é %d, e a posicao é %d!\n", menor, posi+1);
 printf("O maior  valor é %d, e a posicao é %d!\n", maior, posi2+1);
 getch();
 return 0;
    
}
