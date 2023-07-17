#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<strings.h>
#include<stdlib.h>
int op;
struct registros{
	int fone;
	char nome[20], end[20], email[40];
};
struct registros dados[5];
int cadastro();
int pesquisa();
int ordemA();
int alteracao();
int exclusao();
int main(){
	setlocale(LC_ALL,"portuguese");
	op=0;
	while(op<6){
		printf("\n.....REGISTROS.....\n");
		printf("\n...1.cadastro de informa��es...\n ...2.pesquisa de dados...\n ...3.classifica��o em ordem alfab�tica...\n ...4.altera��o de dados...\n ...5.exclus�o...\n");
        scanf("%i",&op);
        switch(op){
        	case 1:
        	cadastro(); break;
            case 2:
			pesquisa(); break;
			case 3: 
			ordemA(); break;
			case 4:
			alteracao(); break;
			case 5:
			exclusao(); break;
			case 6:
			return 0;
			default:
			printf("\n...ERRO!!!...\n");     		
		}
	}
}
	int cadastro()
	{
		int w, i;
		for(i=0; i<5; i++){
			printf("Insira o Nome:\n", w);
			fgets(dados[i].nome, 20, stdin);
			printf("insira o Endere�o:\n", w);
			fgets(dados[i].end, 20, stdin);
			printf("Insira o email:\n", w);
			fgets(dados[i].email, 40, stdin);
			printf("Insira   o telefone:\n", w);
			scanf("%i", &dados[i].fone);
			w++;
		}
	}
		int pesquisa()
		{
		int i, a;
		char busca[20];
		printf("qual nome deseja pesquisar?:\n");
		fgets(busca, 40, stdin);
		i=0;
		a=0;
		while(i<5 && a==0){
			if(strcmp(busca, dados[i].nome)==0)
			a=1;
			else
			i++;
		}
		if(a=1){
			printf("o nome foi encontrado na posi��o %i !!!", i);
			printf("\nNome:%s",dados[i].nome);
		}
        if(a==0){
		printf("ERRO!!!\n");
	}
}
int ordemA()
{
	char help[20];
	int i, j, w, a;
	printf("\n...classifica��o em ordem alfab�tica...\n");
	for(i=0; i<5; i++)
	for(j=0; j<5; j++){
		if(strcmp(dados[i].nome, dados[j].nome)>0){
			strcpy(help, dados[i].nome);
			strcpy(dados[i].nome, dados[j].nome);
			strcpy(dados[j].nome, help);
			strcpy(help, dados[i].end);
			strcpy(dados[i].end, dados[j].end);
			strcpy(dados[j].end, help);
			strcpy(help, dados[i].email);
			strcpy(dados[i].email, dados[j].email);
			strcpy(dados[j].email, help);
			w=dados[i].fone;
			dados[i].fone=dados[j].fone;
			dados[j].fone=w;
		}
	}
	a=1;
	for(i=0; i<5; i++){
		printf("\nNome:%s", a, dados[i].nome);
		printf("\nEndere�o:%s", a, dados[i].end);
		printf("\nEmail:%s", a, dados[i].email);
		printf("\nTelefone:%i", a, dados[i].fone);
		a++;
	}
}
int alteracao()
{
	int i, o, alt;
	char busca[40];
	for(i=0; i<40; i++){
		busca[i]= ' ';
	}
	printf("\ninsira os dados que voc� deseja alterar:\n");
    fgets(busca, 40, stdin);
   i=0;
   o=0;
   while(i<5 && o==0){
   	if(strcmp(busca, dados[i].nome)==0)
   	o=1;
   	else
   	i++;
   }
   if(o==1){
   printf("\n os dados pesquisados est�o na posi��o %i !!!\n", i);
   printf("\nNome:%s",dados[i].nome);
   printf("\nEmail:%s",dados[i].email);
   printf("\nTelefone:%i",dados[i].fone);
   printf("\nEndere�o:%s",dados[i].end);
   }
   if(o==0){
   	printf("\nERRO!!!\n");
   }
   printf("\n QUAL DADO SER� ALTERADO?\n ...1.Nome...\n ...2.Endere�o\n ...3.Telefone...\n ...4.Email...\n");
   scanf("%i",&alt);
   switch(alt){
   	case 1:
   		printf("insira o novo nome:\n");
   		fgets(dados[i].nome, 20, stdin);
   		printf("\n nome:%s", dados[i].nome); break;
   case 2:
   		printf("insira o novo endere�o:\n");
   		scanf("%i",&dados[i].end);
   		printf("\n endere�o:%i", dados[i].end); break;
   	case 3:
	   	printf("insira o novo email:\n");
   		fgets(dados[i].email, 40, stdin);
   		printf("\n email:%s", dados[i].email); break;	
   	case 4:
   		printf("insira o novo telefone:\n");
   	    scanf("%i",&dados[i].fone);
   		printf("\n telefone:%s", dados[i].nome); break;
  default:
	fflush(stdin);
	printf("\nERRO!!!\n");
}
}
int exclusao()
{
	int i, o, esc, w=0;
	char busca[40];
	for(i=0; i<40; i++){
		busca[i]= ' ';
	}
	printf("\ninsira os dados que voc� deseja excluir:\n");
    fgets(busca, 40, stdin);
   i=0;
   o=0;
   while(i<5 && o==0){
   	if(strcmp(busca, dados[i].nome)==0)
   	o=1;
   	else
   	i++;
   }
   if(o==1){
   printf("\n os dados pesquisados est�o na posi��o %i !!!\n", i);
   printf("\nNome:%s",dados[i].nome);
   printf("\nEmail:%s",dados[i].email);
   printf("\nTelefone:%i",dados[i].fone);
   printf("\nEndere�o:%s",dados[i].end);
   }
   if(o==0){
   	printf("\nERRO!!!\n");
   }
   printf("\n QUAL DADO SER� APAGADO?\n ...1.Nome...\n ...2.Endere�o\n ...3.Telefone...\n ...4.Email...\n");
   scanf("%i",&esc);
   switch(esc){
   case 1:
   	strcpy(dados[i].nome, " "); break;
   case	2:
   	strcpy(dados[i].end, " "); break;
   case 3:
   dados[i].fone=w; break;	
   case 4:
   	strcpy(dados[i].email, " "); break;
}
}
