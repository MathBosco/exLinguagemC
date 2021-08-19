#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Pt-br
	setlocale(LC_ALL , "Portuguese");
	
	
	//Variáveis
	int vetor[10] , i , maior , posicao ;
	
	//Input
	posicao = 0;
	maior = 0;
	
	//Laço 
	for(i = 0 ; i < 10 ; i++){
		
		printf("\nInsira o Valor do vetor : ");
		scanf("%d" , & vetor[i]);
		
		if(vetor[i] > maior) {
			
			posicao = i;
			maior = vetor[i];
		}
		
		
	}
	
	printf("\n O maior elemento foi encontrado na posição : %d" , posicao);
	
	
	
	
	
	return 0;
}
