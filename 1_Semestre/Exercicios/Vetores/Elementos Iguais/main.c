#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Variáveos
	int vetor1[5],vetor2[5], i;
	
	//Laço de Repetição
	for(i=0 ; i < 5 ; i++)
	{
		vetor1[i] = i ;
		vetor2[i] = i ;
		
		if(vetor1[i] == vetor2[i]){
			
			printf("\nOs Vetores possuem o mesmo valor ( %d )" , vetor1[i]);
			
		}
		
	}	
		
	
	return 0;
}
