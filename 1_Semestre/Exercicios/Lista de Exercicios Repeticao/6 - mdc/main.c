#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Autor Matheus Bosco Martins da Silva
	setlocale (LC_ALL, "Portuguese");
	
	//Vari�veis 
	int m,n, i , mdc ;
	
	//Enunciado
	printf("Este Programa calcula o m�ximo divisor comum de dois n�meros 'M' e 'N' ");

	//Input de Valores
	printf("\nInsira o valor de M: ");
	scanf("%d", &m);
	
	printf("\nInsira o valor de N: ");
	scanf("%d", &n);
	
	i = 1;
	
	//La�o de repeti��o
	while (i <= n || i <= m ){
		
		if((n % i) == 0 &&  (m % i) == 0){
			mdc = i;
		}
			
		i++;
		
	}
	
	
	//Resultado
	printf("\n O Mdc de %d e %d � : %d" , m , n , mdc);
	
	return 0;
}
