#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	int horas , minutos, horas_f , minutos_f ; 
	
	//Inpui 
	printf("Informe a hora em que o jogo começou: ");
	scanf("%d" , &horas);
	
	printf("\nInforme os minutos em que o jogo começou: ");
	scanf("%d" , &minutos);
	
	
	//operação
	
	horas_f = horas + 1;
	minutos_f = minutos + 45;
	
	
	if(minutos_f >= 60 ){
		horas_f = horas_f + 1;
		minutos_f = minutos_f - 60;
	}
	
	if(horas_f >= 24){
		
		horas_f = 00;
	}
	
	printf("\nEste jogo está previsto para acabar ás %d : %d" , horas_f , minutos_f); 
	
	
	return 0;
}
