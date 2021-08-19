#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Pt-br
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	char texto[80],palavra[80];
	int i , ncaracteres , npalavras;
	
	//Input de dados
	printf("Digite o texto: ");
	fgets(texto,80,stdin);
	
	npalavras = 0;
	i = 0;
	
	//Contagem de caracteres
	ncaracteres = strlen(texto);
	ncaracteres = ncaracteres - 1;
	
	//Contagem de Palavras
	while(texto[i] != '\n' && texto!='\0'){
		while(texto[i] == ' ') {
			i++;
		}	
		
		if(texto[i] != '\n' && texto[i] != '\0'){
			npalavras ++;
			while(texto[i] != ' ' && texto[i] != '\n' && texto[i] != '\0 '){
				i++;
			}
		}
	}
	
	//Output Number of words
	printf("O número de palavras deste texto é igual a = %d" , npalavras);
	
	
	return 0;
}
