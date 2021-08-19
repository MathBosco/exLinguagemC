#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//pt-br
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	int mat[10][10], vetl[10], vetC[10] , diagP = 0 , diagS = 0 ,  n , i , j , verificaL = 0 , verificaC = 0 , verificaD = 0;
	
	//Inser��o de Valores
	printf("Insira o n�mero da dimens�o da matriz (M�x 10): ");
	scanf("%d" , &n);
	
	//Inser��o valores da Matriz
	for(i = 0; i < n ; i++){
		for(j = 0 ; j < n ; j++){
			printf("\nInsira um valor: ");
			scanf("%d" , &mat[i][j]);
		}
	}
	
	//Soma Linhas
	for(i = 0 ; i < n ; i++){
		vetl[i] = 0;
		for(j = 0 ; j < n ; j++){
			vetl[i] = vetl[i] + mat[i][j];	
		}
	}
	
	//Soma Colunas
	for(j = 0 ; j < n ; j++){
		vetC[j] = 0;
		for(i = 0 ; i < n ; i++){
			vetC[j] = vetC[j] + mat[i][j];	
		}
	}
	
	//Soma Diagonal Principal
	for(i = 0 ; i < n ; i++){
		diagP = diagP + mat[i][i];
	}
	
	
	//Soma Diagonal Secund�ria
	i = n;
	while(i >= 0){
			diagS = diagS + mat[i][i];
			i = i-1;
	}
	
	//Verica L
	for(i = 1 ; i < n ; i++){
		if(vetl[i] == vetl[i-1]){
			verificaL = 1;
		}
	}
		
	//Verifica C
	for(i = 1 ; i < n ; i++){
		if(vetC[i] == vetC[i-1]){
			verificaC = 1;
		}
	}	
	
	//Verifica Diagonais
	if(diagS && diagP == vetC[0]){
		verificaD = 1;
	}
			
	//Saida	
	if(verificaL && verificaC && verificaD == 1){
		printf("\n� um Quadrado M�gico");
	} else {
		printf("Quadrado apenas ");
	}
	
	return 0;
}
