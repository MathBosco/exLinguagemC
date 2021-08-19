#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL , "Portuguese");
	//Autor: Matheus Bosco Martins da Silva
	
	
	//Variáveis
	int a,b,i, pot;
	
	//Enunciado
	printf("Este programa imprime o resultado de A^B!");

	//Input das Variáveis
	printf("\nInsira o valor de A: ");
	scanf("%d" , &a);
	printf("\nInsira o valor de B: ");
	scanf("%d" , &b);
	pot = 1;
	
	
	//Laço de Repetição
	for(i = 0 ; i<=b ; i++){
		if(i == b){
			printf("\n%d ^ %d = %d", a , i , pot);
		}
		pot = pot * a;	
		
	}
	return 0;
}
