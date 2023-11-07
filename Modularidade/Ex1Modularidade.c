//Crie uma função que preencha um vetor de mil posições comvalores aleatórios de 1 até 6. 
//Conte quantas vezes cada número foi sorteado.Em seguida, exiba a porcentagem de vezes em que cada número foi sorteado.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenchevetor(int *vetor, int tam, int *cont){
	
	float porc;
	
	for(int i=0;i<6;i++){
		cont[i]=0;
	}
	
	for(int i=0;i<tam;i++){
		vetor[i]=rand()%6+1;
		printf("Indice %d: %d\n", i, vetor[i]);
		
		switch(vetor[i]){
			case 1: cont[0]++; break;
			case 2: cont[1]++; break;
			case 3: cont[2]++; break;
			case 4: cont[3]++; break;
			case 5: cont[4]++; break;
			case 6: cont[5]++; break;
		}
	}
	
	for(int i=0;i<6;i++){
		porc=(cont[i]/1000.0)*100;
		printf("\ncont indice %d: %d ocorrencias -- %.2f%%\n", i, cont[i], porc);
	}
}

int main(){
	
	srand(time(NULL));
	
	int tamanho=1000;
	int vet[tamanho];
	int cont[6];
	
	preenchevetor(vet, tamanho, cont);	
	
	return 0;
}
