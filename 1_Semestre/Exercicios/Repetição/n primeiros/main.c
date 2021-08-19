#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int i = 1;
	
	
	printf("Insira até que numero voce deseja printar: ");
	scanf("%d", &n);
	
	while (i <= n ){
		
		printf("\n%d" , i);
		i++;
	}
	return 0;
}
