#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Função de Soma
void somaMat(double mat1[100][100], double mat2[100][100] , double matres[100][100] , int n ){
	int i , j;
	
	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < n ; j++)
		
		matres [i][j] = mat1[i][j] + mat2[i][j];
	}	
}

int main(int argc, char *argv[]) {
	
	double mat1[100][100] , mat2[100][100] , matres[100][100];
	int i,j,n;
	
	//Atribuição de N
	printf("Digite o tamanho da matriz: ");
	scanf("%d" , &n);
	
	//Atribuição de Mat1
	for(i = 0 ; i<n ; i++){
		for(j = 0 ; j < n ; j++){
			printf("Digite elemento [%d][%d] de Mat1 " , i,j);
			scanf("%lf" , &mat1[i][j]);	
		}	
	}
	
	//Atribuição de Mat2
	for(i = 0 ; i<n ; i++){
		for(j = 0 ; j < n ; j++){
			printf("Digite elemento [%d][%d] de Mat2 " , i,j);
			scanf("%lf" , &mat2[i][j]);	
		}	
	}
	
	somaMat(mat1, mat2 , matres);
	
	return 0;
}
