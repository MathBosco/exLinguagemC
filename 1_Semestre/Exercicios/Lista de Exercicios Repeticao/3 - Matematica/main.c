#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Autor Matheus Bosco Martins da Silva
	setlocale (LC_ALL , "Portuguese");
	
	//Vari�veis
	int n, i ,resultado;
	
	//Input de Valores
	printf("Insira o valor de 'N': ");
	scanf("%d", &n);
	resultado = 0;
	
	//La�o
	for(i=0; i <=n ; i++){
		resultado = resultado + i;
		
		if(i == n){
			printf("O resultado � : %d", resultado);
		}
	}
	
	return 0;
}
