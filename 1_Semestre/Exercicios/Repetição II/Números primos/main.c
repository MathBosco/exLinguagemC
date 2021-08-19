#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	//Variáveis
	int primo,div,n;
	
	//Enunciado
	printf("---Este programa verifica se um número é primo!---");
	printf("\nInsira um Número inteiro: ");
	scanf("%d", &n);
	
	div = 2;
	primo = 1;
	
	while(div <= n - 1) {
		if (n % div == 0) {
			primo = 0;
			break;
		} 
		div++;
	}
	
	if(primo) {
		printf("\nEste Número é primo!");
	} else {
		printf("\nEste Número não é primo!");
	}
	
	
	
	return 0;
}
