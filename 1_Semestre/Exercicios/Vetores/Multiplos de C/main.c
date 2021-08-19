#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Pt-br
	setlocale(LC_ALL , "Portuguese");

	//Variáveis
	int vetor[10] , C , i ;
	
	//Inserção C
	printf("\nInsira um valor para 'C' : ");
	scanf("%d" , &C);
	
	
	//Inserção Vetor
	for(i = 0 ; i < 10 ; i++){
		
		printf("\nInsira o valor do vetor : ");
		scanf("%d" , &vetor[i]);
	
	}
	
	//Output
	for(i = 0 ; i < 10 ; i++){
		if(C % vetor[i] == 0 ) {
			
			printf(" %d " , vetor[i]);
			
		} else {
			
			printf("Não Existem Números");
			
	}
	}	
		
	
	return 0;
}
