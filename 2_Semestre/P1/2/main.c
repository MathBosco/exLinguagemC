#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL , "Portuguese");
	
	//Vari�veis
	int a,b, verifica ; 
	
	
	//Input
	verifica = 0;
	
	printf("Insira o n�mero 'A': ");
	scanf("%d" , &a);
	
	printf("Insira o n�mero 'B': ");
	scanf("%d" , &b);
	
	
	//Opera��o
	
	if(b == (a-1) || b == (a+1) ){
		verifica = 1;	
	} 
	
	//Output 
	if(verifica){
		printf("S�o Sequ�nciais!");
	} else {
		printf("N�o s�o sequ�nciais!");
	}
	
	
	return 0;
}
