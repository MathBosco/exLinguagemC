#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Autor: Matheus Bosco Martins da Silva
	setlocale(LC_ALL, "portuguese");
	
	//Vari�veis
	int opc = 0;
	
	while (opc != 5){
		
	//Menu de Pratos	
	printf("\n1 - Macarronada");
	printf("\n2 - Bacalhau");
	printf("\n3 - Churrasco");
	printf("\n4 - Pizza");
	printf("\n5 - Sair do Menu");
	
	printf("\nInsira o N�mero do prato desejado : ");
	scanf("%d", &opc);
		
		if(opc == 1)
		printf("\nVoc� Recebeu uma Macarronada!");
			else if(opc == 2)
			printf("\nVoc� Recebeu um Bacalhau!");
				else if(opc == 3)
				printf("\nVoc� Recebeu um Churrasco!");
					else if(opc == 4)
					printf("\nVoc� Recebeu uma Pizza!");
						else if(opc == 5)
						printf("\nPrograma terminado!");
	}
	
	
	
	return 0;
}
