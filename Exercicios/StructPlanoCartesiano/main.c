#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Coordenadas{
	int x, y;
};

void impCoordenada(struct Coordenada c){
	printf("Valor de X: %d\n" , c.x);
	printf("Valor de Y: %d\n" , c.y);
}

struct Coordenada somaCoordenada(struct Coordenada p1, struct Coordenada p2){
	struct Coordenada aux;
	aux.x = p1.x + p2.x;
	aux.y = p1.y + p2.y;
	return aux;
}

int main(int argc, char *argv[]) {
	
	struct Coordenadas c1 , c2, c_soma;

	c1.x = 5;
	c1.y = 1;	
	
	impCoordernada(c1);
	
	c2.x = 9; 
	c2.y = 10;
	
	impCoordenada(c2);
	c_soma = somaCoordenada(c1, c2);
	
	return 0;
}
