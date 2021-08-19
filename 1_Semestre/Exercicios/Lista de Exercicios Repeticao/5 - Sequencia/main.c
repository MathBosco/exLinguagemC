#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Autor Matheus Bosco Martins da Silva
	setlocale (LC_ALL,"Portuguese");
	
	//Variáveis
	int contadora, atual , anterior , n;
	int i = 1;
	
	//Insert de Valores
	printf("Insira a quantidade de numeros que você deseja testar: ");
	scanf("%d", &n);
	
	
	printf("\nInsira o primeiro Número : ");
	scanf("%d", &atual);
	
	contadora = 1;
	
	while(i <= (n - 1 )) {

		printf("\nInsira o Próximo Número : ");
		scanf("%d", &anterior);
		
		if(atual > anterior ) {
			contadora = 0;
		} 
		
		i++;
		atual = anterior;
		
	}
	
	if(contadora){
		printf("\nOs valores estão em ordem!");
	} else {
		printf("\nOs valores não estão em ordem!");
	}
	
	return 0;
}
