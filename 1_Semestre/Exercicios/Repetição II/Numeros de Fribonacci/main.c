#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	//Variáveis
	int i,n,atual,prox, result;
	
	//Input
	i = 3;
	
	atual = 1;
	prox = 1;
	result = 0;
	
	printf("Insira a quantidade de números que você deseja verificar (Lembrando que os dois primeiros números são 1 ) : ");
	scanf("%d", &n);
	
	
	//Laço de Repetição
	while (i <= n){
				
	result = atual + prox; 	
	atual = prox;
	prox = result;
	
	printf("\n%d" , result);	
	i ++ ;
	}
	
	
	
	return 0;
}
