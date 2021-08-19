#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int letras_diferentes(char palavra[] , int tam){
	
	//Vari�veis
	int i , j , cont = 0 ;
				

	for(i = 0 ; i <= tam ; i++){
		for(j = 0 ; j <= tam ; j++){
			if(i != j && palavra[i] == palavra[j]){
				cont++;
				break;
			} 
		}
	}
	
	cont = tam - cont;
	
	return cont;
}




int main(int argc, char *argv[]) {
	
	//Pt-br
	setlocale(LC_ALL, "Portuguese");
	
	//Variaveis
	char string[30];
	int nletras = 0 , letrasdif = 0 ;

	//Inser��o da Palavras
	printf("Insira uma palavra: ");
	fgets(string, 30 , stdin);	
	//N�mero de Letras
	nletras = (strlen(string) - 1);
	
	//Inser��o do N de letrras diferentes
	letrasdif = letras_diferentes(string, nletras);	

	//Saida
	printf("\nO n�mero de letras que n�o se repetem � igual a : %d" , letrasdif);

	return 0;
}
