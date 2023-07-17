//8)- Faça um programa que receba como entrada o mês (de 1 a 12) e retorne o nome do respectivo mês. (Utilizar switch/case)
#include<conio.h>
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int mes;
	printf("insira o número de um mês[1-12]:\n");
	scanf("%i",&mes);
	switch(mes){
		case 1:
			printf("janeiro.\n");break;
			case 2:
				printf("fevereiro.\n");break;
				case 3:
					printf("março.\n");break;
					case 4:
						printf("abril.\n");break;
						case 5:
							printf("maio.\n");break;
							case 6:
								printf("junho.\n");break;
								case 7:
									printf("julho.\n");break;
									case 8:
										printf("agosto.\n");break;
										case 9:
											printf("setembro.\n");break;
											case 10:
												printf("outubro.\n");break;
												case 11:
													printf("novembro.\n");break;
													case 12:
														printf("dezembro.\n");break;
														default:
															printf("número de mês inválido!");		
	}
	getch();
	return 0;
}
