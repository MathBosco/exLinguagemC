#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	
	//Variaveis
	int i;
	int n;
	int acu = 0;
	int aux = 0;
	
	//Input n
	printf("Insira o N�mero de Vezes que voc� deseja somar: ");
	scanf("%d", &n);
	
	//La�o
	for(i=1; i<=n; i++){
		
		printf("\nInsira o valor a ser somado: ");
		scanf("%d", &aux);
		
		acu = acu + aux;
		
		printf("\nO valor acumulado � : %d" , acu);
		
	}
	
	return 0;
}
