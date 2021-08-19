#include <stdio.h>
#include <stdlib.h>

#include <string.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void media (int quantidade[]){
	
	int total = 0, i;
	int porcento; 
	
	for(i = 1 ; i <= 1 ; i++){
		total += quantidade[i];
	}
	
	for(i = 1 ; i <= 20 ; i++){
			porcento = (quantidade[i] * 100) / total;
			printf("\n\n----Modelo %d ----" , i);
			printf("\nQuantidade = %d \n porcentagem = %d %" , quantidade[i] , porcento );
		}
	
}

struct Sapato{
	int codigoMod;
	int codigoPed;
	int tamanho;
	char cor[20];
	int quantidade;
};


int main(int argc, char** argv) {
	
	int vetDia[6], i , j , x = 1;
	struct Sapato sapato[100];
	int qtd[20];
	int qtd1 , qtd2;
	
	//Laço dias
	for(i = 1 ; i <= 6 ; i++){
		do {
			//Menu OPC
			printf("\n------Producao dia %d------" , i);
			printf("\n\n1- Digitar um novo pedido");
			printf("\n2 - Finalizar o dia");
			printf("\n\nDgite o codigo da opcao: ");
			scanf("%d" , &j);
			
			//Cadastro
			if(j == 1) {
				
				printf("\n\nInsira o codigo do modelo (1 ate 20) : ");
				scanf("%d" , &sapato[i].codigoMod);
				
				printf("\nInsira o tamanho do sapato: ");
				scanf("%d" , &sapato[i].tamanho);
				
				printf("\nInsira a cor do sapato: ");
				scanf("%s", sapato[x].cor);
				
				printf("\nInsira a quantidade: ");
				scanf("%d" , &sapato[i].quantidade);
				
				printf("\n*Codigo do pedido  = %d\n" , x);
				x++;
				
				switch(sapato[i].codigoMod) {
					case 1:
						qtd1 += sapato[i].quantidade;
						break;
						
					case 2:
						qtd2 += sapato[i].quantidade;
						break;
						
					case 3:
						qtd[3] += sapato[i].quantidade;
						break;
						
					case 4:
						qtd[4] += sapato[i].quantidade;
						break;
						
					case 5:
						qtd[5] += sapato[i].quantidade;
						break;
						
					case 6:
						qtd[6] += sapato[i].quantidade;
						break;
						
					case 7:
						qtd[7] += sapato[i].quantidade;
						break;
						
					case 8:
						qtd[8] += sapato[i].quantidade;
						break;
						
					case 9:
						qtd[9] += sapato[i].quantidade;
						break;
						
					case 10:
						qtd[10] += sapato[i].quantidade;
						break;
						
					case 11:
						qtd[11] += sapato[i].quantidade;
						break;
						
					case 12:
						qtd[12] += sapato[i].quantidade;
						break;
						
					case 13:
						qtd[13] += sapato[i].quantidade;
						break;
						
					case 14:
						qtd[14] += sapato[i].quantidade;
						break;
						
					case 15:
						qtd[15] += sapato[i].quantidade;
						break;														
						
					case 16:
						qtd[16] += sapato[i].quantidade;
						break;
						
					case 17:
						qtd[17] += sapato[i].quantidade;
						break;
						
					case 18:
						qtd[18] += sapato[i].quantidade;
						break;
						
					case 19:
						qtd[19] += sapato[i].quantidade;
						break;
						
					case 20:
						qtd[20] += sapato[i].quantidade;
						break;
									
				}
										
			}	
			else if(j ==2) {
				printf("\nDia finalizado!\n");
			} else {
				printf("\nValor invalido!\n");
			}
		
		} while(j != 2);
	}
	
	media(qtd);
	
	
	return 0;
}
