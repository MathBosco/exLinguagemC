#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Variáveis
	int n[2] , m [12] , i , j ,cont;
	
	//Input Cont
	cont = 0;
	j = 0;
	
	//Input n
	for(i = 0; i < 3 ; i++){
		printf("\nInsira o Valor da sequencia : ");
		scanf("%d" , &n[i]);
	}

	//Input m
	for(i = 0; i < 13 ; i++){
		printf("\nInsira o Valor da sequencia m : ");
		scanf("%d" , &m[i]);
	}
	
	
	//Operação
	while(j < 13) {
		if(n[0] == m[j]){
			j++;
			if(n[1] == m[j]){
				j++;
				if(n[2] == m[j]){
					cont++;
				}
			}	
		} 
		else if(m[j] != n[0]){
			j++;
		}
	}	
	
	//Output
	printf("%d" , cont);
	
	return 0;
}
