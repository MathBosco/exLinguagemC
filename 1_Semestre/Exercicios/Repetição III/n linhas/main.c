#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");

//Variáveis
int linha , coluna,  n;

printf("Insira o valor de N : ");
scanf("%d" , &n);

//Laço de Repetição
for(linha = 1 ; linha <= n ; linha++) {
	for(coluna = 1 ; coluna <= n ; coluna ++){
		if(coluna == linha) {
			printf(" + ");
		} else {
			printf(" * ");
		}
	}
	
	printf("\n");
	
	
}	
	
	
	
	
	
	return 0;
}
