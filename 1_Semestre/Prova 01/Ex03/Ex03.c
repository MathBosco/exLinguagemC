#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void frequencias (int v[] , int n , int *f1 , int *f2){
	
	int i , j , x , cont , ok;
	
for(i = 0 ; i < n ; i++){
	for (j = (i - 1) ; j >= 0 ; j--){
		if( i == 0 || v[i] != v[j]){
			ok = 1;
		} else {
			ok = 0;
		}
	}
	
	if(ok == 1){
		for(x = 0 ; x < n ; x++){
			if(v[i] == v[x]){
				cont++;
			} else {
				cont = 1;
			}
		}
		
		if (cont > *f2){
			*f2 = v[i];
		}
		
		if (cont < *f1){
			*f1 = v[i];
		}
	}
}

printf("\nO valor que aparece com maior frequencia = %d" , *f2);
printf("\nO valor que aparece com menor frequencia = %d" , *f1);



}


int main(int argc, char *argv[]) {
	
	int vet[] = {1 , 2 , 5 , 1 , 5 , 1 , 9 , 2 , 5 , 5} , tam = 10 , *f1 , *f2;
	
	frequencias(vet , tam , &f1 , &f2);

	
	
	return 0;
}
