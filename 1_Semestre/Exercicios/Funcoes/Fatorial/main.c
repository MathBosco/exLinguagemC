#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fat(int base){
	int result, i;
	
	if(base <= 0){
		result = 1;
	} else {
		result = 1;	
		for(i = base; i != 0 ; i--){
		result = result * i; 
		}
	}
	
	return result;
}




int main(int argc, char *argv[]) {
	
	//Pt-br
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	int n,r;
	
	//Input
	printf("Insira o n�mero : ");
	scanf("%d", &n);
	
	//Fun��o
	r = fat(n);
	
	//Output
	printf("\nO valor da fatorial de %d � igual a %d " , n , r);
	
	
	return 0;
}
