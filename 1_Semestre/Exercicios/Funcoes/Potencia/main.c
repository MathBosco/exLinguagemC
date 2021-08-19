#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	//Função Para potência
double pot(int e , double b){
		
		//Variáveis
		int i;
		double r;
		r = b;
		
		//Operação
		for(i = 2; i <= e ; i++){
			r = r * b;
		}
		return r;
	}


int main(int argc, char *argv[]) {

	//Pt-br
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	int expo ; 
	double base , result ; 
	
	//Input
	printf("Insira a Base da potência: ");
	scanf("%lf" , &base);
	
	printf("\nInsira o Expoente : ");
	scanf("%d" , &expo);
	
	result = pot(expo,base);
	
	//Output
	printf("\nO Resultado é = %.2lf" , result); 	
	
	return 0;
}
