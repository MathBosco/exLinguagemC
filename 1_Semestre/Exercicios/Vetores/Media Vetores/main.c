#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the 2
 pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Pt-br
	setlocale(LC_ALL , "Portuguese");
	
	//Vari�veis
	int i;
	float vetor[10] , media;
	
	//Declara��o de valores vetor
	for(i = 0 ; i < 10 ; i++) {
		
		printf("\nInsira o valor do vetor : ");
		scanf("%f" , &vetor[i]);
	
		media = media + vetor[i];	
	}
	
	//Opera��o
	media = media / 10.0 ; 
	
	//Output
	printf("\nA media dos valores � : %2.lf " , media);
	
	return 0;
}
