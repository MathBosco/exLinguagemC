#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Pt-br
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	char nome[80];
	
	//Input
	printf("Qual seu nome? ");
	fgets(nome,80,stdin);	
	
	//Output
	printf("\nOlá %s " , nome);
	
	return 0;
}
