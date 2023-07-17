#include<conio.h>
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int curso;
	printf("insira o número de um curso[1-5]:\n");
	scanf("%i",&curso);
	switch(curso){
		case 1:
			printf("engenharia.\n");break;
			case 2:
				printf("edificações.\n");break;
				case 3:
					printf("sistemas elétricos.\n");break;
					case 4:
						printf("turismo.\n");break;
						case 5:
							printf("análise de sistemas.\n");break;
							default:
								printf("curso inválido!");
							}
							getch ();
							return 0;
						}
