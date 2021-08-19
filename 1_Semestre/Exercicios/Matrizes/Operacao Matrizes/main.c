#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	//Pt-br
	setlocale(LC_ALL , "Portuguese");
	
	//Variáveis
	int i , j , k, mat1[MAX][MAX] , mat2[MAX][MAX], mat3[MAX][MAX] , mat4[MAX][MAX] ,n , opc ;
	
	//Insert
	printf("Insira o valor da dimensão das matrizes : ");
	scanf("%d" , &n);
	
	//Laço de Repetição
	do {
		
		//Menu
		printf("\n-----------Menu de Seleção-----------");
		printf("\n 1 - Leitura Matriz1 ");
		printf("\n 2 - Leitura Matriz2 ");
		printf("\n 3 - Impressão de ambas  ");
		printf("\n 4 - Soma entre as matrizes");
		printf("\n 5 - Multiplicação entre as Matrizes");
		printf("\n 6 - Subtração entre as Matrizes");
		printf("\n 7 - Transposta de ambas as Matrizes");
		printf("\n 8 - Finalizar Programa");
		
		//Opção do Menu
		printf("\n\nInsira o Código da opção desejada : ");
		scanf("%d" , &opc);
		
		//Condição 1
		if(opc == 1 ){
			for(i = 0 ; i < n ; i++){
				for(j = 0 ; j < n ; j ++){
						printf("\nInsira o valor : ");
						scanf("%d" , &mat1[i][j]);
					}
				}
			}
			
		//Condição 2	
			else if(opc == 2){
				for(i = 0 ; i < n ; i++){
					for(j = 0 ; j < n ; j ++){
						printf("\nInsira o valor : ");
						scanf("%d" , &mat2[i][j]);
					}
				}
			}	
			
		//Condição 3	
			else if(opc == 3) 
				{
					printf("\nMatriz 1 :");
					for(i = 0 ; i < n ; i++){
						printf("\n");
						
							for(j = 0 ; j < n ; j++){
									printf("%d " , mat1[i][j]);
								}
					}
						
					printf("\n\nMatriz 2 :");
					for(i = 0 ; i < n ; i++){
						printf("\n");
					
							for(j = 0 ; j < n ; j++){
								printf("%d " , mat2[i][j]);
							}		
					}		
				}
				
		//Condição 4			
			else if (opc == 4 ) {
				printf("\nResultado da soma : ");
				for(i = 0 ; i < n ; i ++){
					printf("\n");
					for(j = 0 ; j < n ; j++){
						mat3[i][j] = mat1[i][j] + mat2[i][j];
						printf("%d " , mat3[i][j]);
					}	
				}	
			}	
				
		//Condção 5
			else if( opc == 5 ) {
				for(i = 0 ; i < n ; i++){
					for(j = 0 ; j < n ; j++){
						for(k = 0 ; k < n ; k++){
							mat4[i][j] = mat4[i][j] + (mat1[i][k] * mat2[k][j]);
						}
					}
				}
				
				printf("\nResultado da multiplicação :");
				for(i = 0 ; i < n ; i++){
					printf("\n");
					for(j = 0 ; j < n ; j++){
						printf("%d " , mat4[i][j]);
					}
				}
			}	
			
			
		
		


	} while(opc != 8);
	
	
	return 0;
}
