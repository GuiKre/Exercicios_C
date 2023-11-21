#include <stdio.h>
#include <string.h>

typedef struct{
	char nome[50];
	float renda;
	float idh;
	int populacao;	
}cidade;

int main(){
	
	int qtd, maiorPop=0, indiceMaiorPop=0, compara=0;
	float somaRenda=0.0;
	char cidadeBusca[50];
	
	printf("Digite a quantidade de cidades: ");
	scanf("%d", &qtd);
	
	cidade city[qtd];
	
	for(int i=0;i<qtd;i++){
		printf("---Cadastrando cidade %d---\n", i+1);
		
		fflush(stdin);
		printf("Nome: ");
		scanf("%[^\n]s", city[i].nome);
		
		printf("Renda: ");
		scanf("%f", &city[i].renda);
		
		printf("IDH: ");
		scanf("%f", &city[i].idh);
		
		printf("Populacao: ");
		scanf("%d", &city[i].populacao);
		
		printf("\n");
		
		somaRenda+=city[i].renda;
		
		if(city[i].populacao>maiorPop){
			maiorPop=city[i].populacao;
			indiceMaiorPop=i;
		}
		
	}
	
	printf("Renda media: %.2f\n", somaRenda/qtd);
	printf("Maior populacao: %s\n", city[indiceMaiorPop].nome);
	
	fflush(stdin);
	printf("Cidade a ser buscada nos registros: ");
	scanf("%[^\n]s", cidadeBusca);
	
	for(int i=0;i<qtd;i++){
		compara=strcmp(city[i].nome, cidadeBusca);
		
		if(compara==0){
			printf("\n\nNome: %s\n", city[i].nome);
			printf("Renda: %.2f\n", city[i].renda);
			printf("IDH: %.1f\n", city[i].idh);
			printf("Populacao: %d\n", city[i].populacao);
		}
	}
	
	return 0;
}
