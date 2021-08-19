#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Português
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	int n,i,maior,atual;
	
	//Input
	maior = 0;
	
	printf("Insira a quantidade de números que deseja verificar : ");
	scanf("%d", &n);
	
	//Laço de Repetição
	for(i = 1 ; n >= i ; i++){
		
		printf("\nInsira um Valor: ");
		scanf("%d", &atual);
		
		if(atual > maior){
			
			maior = atual;
			
		}
	}
	
	//Output
	printf("\nO maior número lido foi o : %d" , maior);
	
	return 0;
}
