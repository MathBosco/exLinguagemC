#include <stdio.h>
#include <stdlib.h>

#define MAX 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void mat_to_vet(int matriz[MAX][MAX] , int vetor[] , int tam){
	
		int x , y , z = 0;
		
		for(x = 0 ; x < tam ; x++){
			for(y = 0 ; y < tam ; y++){
				vetor[z] = matriz[x][y];
				z++;
			}
		}
}

int main(int argc, char *argv[]) {
	
	int mat [MAX][MAX], n , i , j , vet[MAX];
	
	printf("Insira a dimensao da matriz: ");
	scanf("%d", &n);
	
	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < n ; j++){
			printf("\nValor da matriz [%d] [%d]: " , i , j);
			scanf("%d" , &mat[i][j]);
		}
	}
	
	mat_to_vet(mat , vet , n);
	
	printf("\nIMPRESAO MATRIZ");
	for(i = 0 ; i < n ; i++){
		printf("\n");
		for(j = 0 ; j < n ; j++){
			printf("%d " , mat[i][j]);
		}
	}
	
	printf("\nIMPRESSAO VETOR\n");
	for(i = 0 ; i < (n * n); i++){
		printf("%d " , vet [i]);
	}
	
	return 0;
}
