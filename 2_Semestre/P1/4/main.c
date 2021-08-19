#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	int cod, quantidade , unidadesTotais, q1 , q2 , q3 , q4, q5 , pedidos;
	float valorFinal;
	
	//Input
	q1 = 0;
	q2 = 0;
	q3 = 0;
	q4 = 0;
	q5 = 0;
	pedidos = 0;

	
	
	do {
		printf("\nCódigo |     Produto       | Preço Uni.");
		printf("\n---------------------------------------");
		printf("\n   1   | Camiseta Branca   |    7,00");
		printf("\n   2   | Camiseta Colorida |    9,00");
		printf("\n   3   | Moletom           |    17,00");
		printf("\n   4   | Calça             |    20,00");
		printf("\n   5   | Boné              |    5,00");
		printf("\n   9   | Sair do Programa      ");
		
		printf("\n\nDigite o Código do produto desejado :");
		scanf("%d" , &cod);
		
		if(cod == 1 ) {
			printf("Insira a quantidade de Camisetas Brancas : ");
			scanf("%d" , &quantidade);
			
			valorFinal = valorFinal + (quantidade * 7);
			
			q1 = q1 + quantidade;
			quantidade = 0;
			pedidos ++ ;
		}
		else if (cod == 2){
			printf("Insira a quantidade de Camisetas Coloridas : ");
			scanf("%d" , &quantidade);
			
			valorFinal = valorFinal + (quantidade * 9);
			
			q2 = q2 + quantidade;
			quantidade = 0;
			pedidos ++ ;
			
		}
		else if (cod == 3){
			printf("Insira a quantidade de Moletons : ");
			scanf("%d" , &quantidade);
			
			valorFinal = valorFinal + (quantidade * 17);
			
			q3 = q3 + quantidade;
			quantidade = 0;
			pedidos ++ ;
			
		}
		else if (cod == 4){
			printf("Insira a quantidade de Calças : ");
			scanf("%d" , &quantidade);
			
			valorFinal = valorFinal + (quantidade * 20);
			
			q4 = q4 + quantidade;
			quantidade = 0;
			pedidos ++ ;
			
		}
		else if (cod == 5){
			printf("Insira a quantidade de Bonés : ");
			scanf("%d" , &quantidade);
			
			valorFinal = valorFinal + (quantidade * 5);
			
			q5 = q5 + quantidade;
			quantidade = 0;
			pedidos ++ ;
			
		}
		
	

	} while (cod != 9);
	
	system("cls");
	unidadesTotais = q1 + q2 + q3 + q4 + q5;
	 
	printf("\n----- Extrato do pedido ----- " );
	printf("\nNúmero de unidades vendidades de cada produto : ");
	printf("\nCamisetas Brancas = %d " , q1);
	printf("\nCamisetas Coloridas = %d " , q2);
	printf("\nMoletons = %d " , q3);
	printf("\nCalças = %d " , q4);
	printf("\nBoné = %d " , q5);
	printf("\nTotal de Unidades Vendidas no Período = %d" , unidadesTotais);
	printf("\nNúmero de Pedidos Processados = %d" , pedidos);
	printf("\nVALOR FINAL = R$%.2lf " , valorFinal);




	
	return 0;
} 
