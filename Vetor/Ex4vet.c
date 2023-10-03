#include <stdio.h>

int main(){
	
	int valores[6], i, maior=0, menor=20, pesq;
	float soma=0.0;
	
	for(i=0; i<6; i++){
		do{
		printf("Preencha o indice %d: ", i);
		scanf("%d", &valores[i]);
		}while(valores[i]<1||valores[i]>20||valores[i] % 2 != 0);
	}
	
	printf("--- Vetor preenchido ---\n");
	for(i=0; i<6; i++){
		printf("Indice %d: %d\n", i, valores[i]);
	
		if(valores[i]>maior){
			maior=valores[i];
		}
		if(valores[i]<menor){
			menor=valores[i];
		}
		
		soma=soma+valores[i];
	}
	
	printf("\nO menor valor encontrado eh: %d", menor);
	printf("\nO maior valor encontrado eh: %d", maior);
	printf("\nA media dos valores eh: %f", soma/6.0);
	
	printf("\nDigite o valor a ser pesquisado: ");
	scanf("%d", &pesq);
	
	for(i=0; i<6; i++){
		if(valores[i]==pesq){
			printf("O valor foi encontrado.");
			break;
		}
	}
	
	return 0;
}
