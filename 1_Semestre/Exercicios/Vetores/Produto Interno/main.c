#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Variáveis
	int num1 [5], num2[5] , i , resultado;
	
	//Input
	resultado = 0;
	
	//Laço
	for(i = 0 ; i < 5 ; i++ )
	{
		
		num1[i] = 10 + i;
		num2[i] = 5 + i;
		
		resultado = resultado + (num1[i] * num2[i]);	
	}
	
	//Output
	printf("Resultado : %d" , resultado);
	
	
	return 0;
}
