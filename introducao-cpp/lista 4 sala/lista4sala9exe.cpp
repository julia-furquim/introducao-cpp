#include<conio.h>
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int curso;
	printf("insira o n�mero de um curso[1-5]:\n");
	scanf("%i",&curso);
	switch(curso){
		case 1:
			printf("engenharia.\n");break;
			case 2:
				printf("edifica��es.\n");break;
				case 3:
					printf("sistemas el�tricos.\n");break;
					case 4:
						printf("turismo.\n");break;
						case 5:
							printf("an�lise de sistemas.\n");break;
							default:
								printf("curso inv�lido!");
							}
							getch ();
							return 0;
						}
