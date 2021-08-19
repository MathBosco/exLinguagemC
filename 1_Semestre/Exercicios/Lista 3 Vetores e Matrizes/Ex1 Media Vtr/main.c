#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 50

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//pt-br
	setlocale(LC_ALL , "Portuguese");
	
	//Variáveis
	int vetor[MAX] , media , n , i;
	
	//Input
	printf("Insira o número de vetores: ");
	scanf("%d" , &n);
	
	//Laço de repetição
	
	for(i = 0 ; n > i ; i++){
		
		printf("\nInsira o Valor do vetor: ");
		scanf("%d" , &vetor[i]);
		media = media + vetor[i];
	}
	
	//Operação
	media = media / n;
	
	//Output
	printf("\nA média dos valores inseridos no vetor é : %d" , media);

	return 0;
}
