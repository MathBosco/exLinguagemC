#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Pt-br
	setlocale(LC_ALL , "Portuguese");
	
	
	//Vari�veis
	int vetor[10] , i , maior , posicao ;
	
	//Input
	posicao = 0;
	maior = 0;
	
	//La�o 
	for(i = 0 ; i < 10 ; i++){
		
		printf("\nInsira o Valor do vetor : ");
		scanf("%d" , & vetor[i]);
		
		if(vetor[i] > maior) {
			
			posicao = i;
			maior = vetor[i];
		}
		
		
	}
	
	printf("\n O maior elemento foi encontrado na posi��o : %d" , posicao);
	
	
	
	
	
	return 0;
}
