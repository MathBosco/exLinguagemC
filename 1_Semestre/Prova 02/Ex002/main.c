#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Autores: Matheus Bosco, Vinicius Solon , Rafael Neder

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct Carro{
	char placa[8];
	char marca[12];
	char modelo[12];
} Carro;

 void imprimeCarro(char nomeArq[]){
 	
	FILE *arq = fopen(nomeArq, "r + b");
	Carro aux;
	
	if(arq == NULL){
		printf("\nErro ao iniciar o arquivo!");	 
		return ;
	}
	
	printf("\n\n----- Dados do Arquivo ------\n");
	
	while( fread(&aux , sizeof(Carro) , 1 , arq) !=0){
		printf("\nPlaca: %s , Marca: %s , Modelo: %s" , aux.placa , aux.marca , aux.modelo);
	}
	
	fclose(arq);
	
}

void alteraCarro(char nomeArq[] , char placa[] , char marca[] , char modelo[]){

	FILE *arq = fopen(nomeArq, "r + b");
	Carro aux;
	int achou; 
	char novaMarca[12] , novoModelo[12];
	
	if(arq == NULL){
		printf("\nErro ao iniciar o arquivo!");	 
		return ;
	}	
		
	
	while( fread(&aux , sizeof(Carro), 1 , arq) != 0){
		if(strcmp(aux.placa, placa) == 0){	
			achou = 1;
			
			printf("\n\nInsira a nova marca: ");
			scanf("%s" , &novaMarca);
			
			printf("\nInsira o novo modelo: ");
			scanf("%s" , &novoModelo);
			
			break;
		}
	}
		if(achou == 1){
			fseek(arq,  -1 * sizeof(Carro), SEEK_CUR);
			strcpy(aux.marca , novaMarca);
			fwrite(&aux, sizeof(Carro) , 1 , arq);
			
			fseek(arq,  -1 * sizeof(Carro), SEEK_CUR);
			strcpy(aux.modelo , novoModelo);
			fwrite(&aux, sizeof(Carro) , 1 , arq);
		}
	
	fclose(arq);
}

int main(int argc, char *argv[]) {

	char nomeArq[] = "carros.bin";
	FILE * arq = fopen(nomeArq , "w + b");
	Carro carros[] = {{"ABC1234" , "Chevrolet" , "Camaro"} , {"DEF5678" , "Volksvagem" , "Gol"} , {"EDF7894" , "Carro" , "Marca"}};
	
	if(arq == NULL){
		printf("\nErro ao criar o arquivo!"); return 1;
	}
	
	fwrite(carros , sizeof(Carro) , 2 , arq);
	fclose(arq);
	
	
	imprimeCarro(nomeArq);
	alteraCarro(nomeArq, "ABC1234" , "Chevrolet" , "Camaro");
	imprimeCarro(nomeArq);

	return 0;
}
