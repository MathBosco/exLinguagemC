#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	//Fun��o Para pot�ncia
double pot(int e , double b){
		
		//Vari�veis
		int i;
		double r;
		r = b;
		
		//Opera��o
		for(i = 2; i <= e ; i++){
			r = r * b;
		}
		return r;
	}


int main(int argc, char *argv[]) {

	//Pt-br
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	int expo ; 
	double base , result ; 
	
	//Input
	printf("Insira a Base da pot�ncia: ");
	scanf("%lf" , &base);
	
	printf("\nInsira o Expoente : ");
	scanf("%d" , &expo);
	
	result = pot(expo,base);
	
	//Output
	printf("\nO Resultado � = %.2lf" , result); 	
	
	return 0;
}
