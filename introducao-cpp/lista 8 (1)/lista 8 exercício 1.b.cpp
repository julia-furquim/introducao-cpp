#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<strings.h>
#include<math.h>
struct infos{
	int i;
	float media, nota[2];
	char nome[20];
}; 
struct infos infos[20];
int cadastro();
int classificacao();
int correcao();
int pesquisa();
int aprovados();
int reprovados();
int media();
int registro();
int main(){
	int op;
	setlocale(LC_ALL,"portuguese");
	op=0;
	while(op!=7){
		printf("\n.....REGISTRO.....\n");
		printf("\n...1.cadastro...\n ...2.classificação em ordem alfabética...\n ...3.correção de dados...\n ...4.pesquisa de dados...\n ...5.lista de aprovados...\n ...6.lista de reprovados...\n ...1.calculo de média...\n ...1.registro de notas...\n ...7.sair...\n");
	    scanf("%i",&op);
	    switch(op){
	    	case 1:
	    		cadastro();
	    		media(); 
				registro(); break;
	    	case 2: 
			classificacao(); break;
			case 3:
			correcao(); break;
			case 4:
			pesquisa(); break;
			case 5:
			aprovados(); break;
			case 6:
			reprovados(); break;
			case 7:
			return 0;	
			default:
				printf("...ERRO!...");
		}
	}
	getch();
	return 0;
}
	int cadastro(){
	int i;
	for(i=0; i<20; i++){
		printf("Insira o nome dos alunos:");
		fgets(infos[i].nome, 20, stdin);
}
}
   int registro(){
   	int b, i;
   	for(i=0; i<20; i++){
   			printf("\n\nInsira as notas:\n", b);
		scanf("%f",&infos[i].nota);
		b++;
	}
   }
	int classificacao(){
	char help[50];
	int a, b, c, d, e, i;
	printf("\n...classificação por ordem alfabética...\n");
	for(i=0; i<20; i++)
	for(a=0; a<20; a++){
		if (strcmp(infos[i].nome, infos[a].nome)>0){
			strcpy(help, infos[i].nome);
			strcpy(infos[i].nome, infos[a].nome);
			strcpy(infos[a].nome, help);
			a=infos[i].media;
			infos[a].media=c;
	printf("\n...classificação por ordem alfabética...\n");
	printf("...Nome: %s...", infos[i].nome);
	printf("\n...Notas: %i...", infos[i].media);
	for(a=0; a<4; a++){
		printf("\n nota: %i", b, infos[i].nota[a]);
	}
		}
	}
	}
	int correcao(){
	int alt, i;
	printf("\n...correção de dados...\n");
	printf("...a correção será feita no seguinte dado...\n ...1.nome...\n ...2.nota...\n");
	scanf("%i", &alt);
	switch(alt){
		case 1:
			printf("insira novamente o nome:\n");
			fgets(infos[i].nome, 20, stdin); break;
		case 2:
		printf("Insira novamente as notas:\n");
		scanf("%f",&infos[i].nota[2]); break;
		if (alt=1){
			printf("os novos dados...\n %s", infos[i].nome);
		if (alt=2){
			printf("os novos dados...\n %f", infos[i].nota);
			default:
			printf("\n nenhuma alteração foi feita!\n");
		}	
		}		
	}
	}
	int pesquisa(){
	int i, o, a, b, c;
	char pesq[40];
	printf("Insira o nume que deseja procurar:\n");
	fgets(infos[i].nome, 20, stdin); 
	while(i<20 && o==0);{
    if (strcmp(pesq, infos[i].nome)==0)
    o==1;
    if (o==1){
    printf("\n o nome foi encontrado na %iº posição!\n");
	printf("\n nome: %s\n", infos[i].nome);	
	}
	}
}
	  int media(){
	  int i, a;
	for(i=0; i<20; i++){
		a=infos[i].nota[0]+infos[i].nota[1];
		infos[i].media=(a/4);
		printf("\n...a média das notas é %i...\n", infos[i].media);
	}
	   }
	   int aprovados(){
	   int a, b, i;
	   for(i=0; i<20; i++){
	   	if (infos[i].media>=7){
	   		printf("o aluno %s foi aprovado!", infos[i].nome);
		   }
	   }
}
	   int reprovados(){
	   int i, a, b;
	   for(i=0; i<20; i++){
	   	if(infos[i].media<7){
	   		printf("o aluno %s foi reprovado!", infos[i].nome);
		   }
	   }
}
