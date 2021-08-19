#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Variáveis 
	int n1,n2,n3,n4,n5,n6;
	
	printf("N1 N2 N3 N4 N5 N6\n");
	for(n1 = 1 ; n1 <= 60 ; n1++)
		for(n2 = n1 + 1 ; n2 <= 60 ; n2++)
			for(n3 = n2 + 1 ; n3 <= 60 ; n3++)
				for(n4 = n3 + 1 ; n4 <= 60 ; n4++)
					for(n5 = n4 + 1 ; n5 <= 60 ; n5++)
						for(n6 = n5 + 1 ; n6 <= 60 ; n6++)
							printf(" %d %d %d %d %d\n",n1,n2,n3,n4,n5,n6);



	
	
	return 0;
}
