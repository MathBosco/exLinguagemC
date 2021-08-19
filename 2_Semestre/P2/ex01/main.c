#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//pt-br
	setlocale(LC_ALL , "Portuguese");
	
	//Variáveis
	int atual , anterior , cont = 0 , seq = 0;
		
	//Verifca Sequencia
	do {
		
		printf("\nInsira um valor : ");
		scanf("%d" , &atual);
		
		if(atual >=0 && atual < anterior){
			cont++;
			if(cont > seq){
				seq = cont;
			}
			
		} else {
			cont = 1 ;
		}
		
		anterior = atual;
		
	} while (atual >= 0 || anterior >= 0);
	
	
	//Saida
	printf("%d" , seq);
	
	
	
	return 0;
}
