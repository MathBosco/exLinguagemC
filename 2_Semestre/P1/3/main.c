#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	int horas , minutos, horas_f , minutos_f ; 
	
	//Inpui 
	printf("Informe a hora em que o jogo come�ou: ");
	scanf("%d" , &horas);
	
	printf("\nInforme os minutos em que o jogo come�ou: ");
	scanf("%d" , &minutos);
	
	
	//opera��o
	
	horas_f = horas + 1;
	minutos_f = minutos + 45;
	
	
	if(minutos_f >= 60 ){
		horas_f = horas_f + 1;
		minutos_f = minutos_f - 60;
	}
	
	if(horas_f >= 24){
		
		horas_f = 00;
	}
	
	printf("\nEste jogo est� previsto para acabar �s %d : %d" , horas_f , minutos_f); 
	
	
	return 0;
}
