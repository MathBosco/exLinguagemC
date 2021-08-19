#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 10


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL , "Portuguese");
	
	//Variáveis
	int n,i,j;
	double mat1[MAX] [MAX] , mat2[MAX] [MAX] , mat3[MAX] [MAX];
	
	
	//Input
	printf("Dimensão das Matrizes");
	scanf("%d" , &n);
	
	//Matriz 1
	printf("Lendo os dados da matriz linha por linha : \n");
	for(i = 0 ; i < n ; i++ )
		for(j = 0 ; j < n ; j++)
		scanf("%lf" , &mat1[i] [j]);
	
	//Matriz 2
	printf("Lendo os dados da matriz linha por linha : \n");
	for(i = 0 ; i < n ; i++ )
		for(j = 0 ; j < n ; j++)
		scanf("%lf" , &mat2[i] [j]);
		
	//Matriz 3	
	printf("Lendo os dados da matriz linha por linha : \n");
	for(i = 0 ; i < n ; i++ )
		for(j = 0 ; j < n ; j++){
			
			mat3[i] [j] = mat1[i] [j] + mat2[i] [j];
		}
		
		
		
	//Output
	printf("Impressão de dados");
	for(i = 0 ; i < n ; i++ )
		for(j = 0 ; j < n ; j++)
		printf("\n%.2lf" , mat3 [i] [j]);		
		
			
	
	
	
	
	return 0;
}
