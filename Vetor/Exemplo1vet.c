#include <stdio.h>

int main(){
	
	int tamanho;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int pesos[tamanho], i, soma=0;
	
	
	//preencher o vetor
	for(i=0; i<tamanho; i++){
		printf("Digite um valor para o indice %d: ", i);
		scanf("%d", &pesos[i]);
	}
	
	for(i=0; i<tamanho; i++){
		//soma(parcial ou não) os valores do vetor
		soma=soma+pesos[i];
	}	
	
	//imprime os valores do vetor
	for(i=0; i<tamanho; i++){
		printf("%d ", pesos[i]);
	}
	
	printf("\n\nSoma dos valores do vetor: %d", soma);
	return 0;
}
