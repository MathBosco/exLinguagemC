#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 50

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//pt-br
	setlocale(LC_ALL , "Portuguese");
	
	//Vari�veis
	int vetor[MAX] , media , n , i;
	
	//Input
	printf("Insira o n�mero de vetores: ");
	scanf("%d" , &n);
	
	//La�o de repeti��o
	
	for(i = 0 ; n > i ; i++){
		
		printf("\nInsira o Valor do vetor: ");
		scanf("%d" , &vetor[i]);
		media = media + vetor[i];
	}
	
	//Opera��o
	media = media / n;
	
	//Output
	printf("\nA m�dia dos valores inseridos no vetor � : %d" , media);

	return 0;
}
