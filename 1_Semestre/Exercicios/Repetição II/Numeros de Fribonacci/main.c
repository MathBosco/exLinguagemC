#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	//Vari�veis
	int i,n,atual,prox, result;
	
	//Input
	i = 3;
	
	atual = 1;
	prox = 1;
	result = 0;
	
	printf("Insira a quantidade de n�meros que voc� deseja verificar (Lembrando que os dois primeiros n�meros s�o 1 ) : ");
	scanf("%d", &n);
	
	
	//La�o de Repeti��o
	while (i <= n){
				
	result = atual + prox; 	
	atual = prox;
	prox = result;
	
	printf("\n%d" , result);	
	i ++ ;
	}
	
	
	
	return 0;
}
