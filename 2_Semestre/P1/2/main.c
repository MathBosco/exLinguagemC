#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL , "Portuguese");
	
	//Variáveis
	int a,b, verifica ; 
	
	
	//Input
	verifica = 0;
	
	printf("Insira o número 'A': ");
	scanf("%d" , &a);
	
	printf("Insira o número 'B': ");
	scanf("%d" , &b);
	
	
	//Operação
	
	if(b == (a-1) || b == (a+1) ){
		verifica = 1;	
	} 
	
	//Output 
	if(verifica){
		printf("São Sequênciais!");
	} else {
		printf("Não são sequênciais!");
	}
	
	
	return 0;
}
