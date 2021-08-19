#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL , "Portuguese");
	
	//Variáveis
	float preco_prod , preco_final  ;
	int   unidades, desconto ;
	
	//Input
	printf("Insira o Número de unidades que deseja comprar: ");
	scanf("%d" , &unidades);
	
	preco_prod = 5.00;
	
	//Operação
	if (unidades <= 10 )
	{	
		preco_final = unidades * preco_prod;
		desconto = 0;
		
		printf("\nO valor total a ser pago é de : R$%.2lf", preco_final );
		printf("\nO desconto não foi aplicado");
	}
	else if (unidades >= 11 && unidades <= 20 )
	{
		preco_final = (unidades * preco_prod);
		preco_final = preco_final - (preco_final * 0.10);
		
		desconto = 10;
		
		printf("\nO valor total a ser pago é de : R$%.2lf", preco_final );
		printf("\nO Desconto aplicado foi de %d por cento" , desconto);
		
	}
	else if (unidades >= 21 && unidades <= 50 )
	{
		preco_final = (unidades * preco_prod);
		preco_final = preco_final - (preco_final * 0.15);
		
		desconto = 15;
		
		printf("\nO valor total a ser pago é de : R$%.2lf", preco_final );
		printf("\nO Desconto aplicado foi de %d por cento" , desconto);
		
	}	
	else if (unidades > 50 )
	{
		preco_final = (unidades * preco_prod);
		preco_final = preco_final - (preco_final * 0.20);
		
		desconto = 20;
		
		printf("\nO valor total a ser pago é de : R$%.2lf", preco_final );
		printf("\nO Desconto aplicado foi de %d por cento" , desconto);
		
	}
	
	return 0;
}
