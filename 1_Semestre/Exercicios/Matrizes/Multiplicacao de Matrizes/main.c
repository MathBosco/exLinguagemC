#include <stdio.h>
#include <stdlib.h>
#include <locale.h>0
#define MAX 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//pt-br
	setloacle(LC_ALL, "Portuguese");

	//Variavies
	int i,j,n,mat1[MAX][MAX], mat2[MAX][MAX] , mat3[MAX][MAX];
	
	printf("Digite o valor da dimensão das matrizes : ");
	scanf("%d", &n);

	//Mat1	
	for(i=0; i < n ; i++ ){
		for(j=0; j < n ; j++) {
			printf("\nDigite o valor do vetor");
			scanf("%d" , &mat1[i][j]);
			printf("%d" , mat1 [i][j]);
		}
	
	//Mat2	
	for(i=0; i < n ; i++ ){
		for(j=0; j < n ; j++) {
			printf("\nDigite o valor do vetor");
			scanf("%d" , &mat2[i][j]);
			printf("%d" , mat2[i][j]);
		}		
	}
	return 0;
}
