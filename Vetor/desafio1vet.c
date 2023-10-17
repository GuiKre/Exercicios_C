#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	int vet[9], i, aux, num, cont=0;
	
	for(i=0;i<9;i++){
		vet[i]=(rand()%20)+1;
		printf("%d  ", vet[i]);
	}		
	
	aux=vet[8];
	for(i=8;i>=1;i--){
		vet[i]=vet[i-1];
	}
	vet[0]=aux;
	
	printf("\n\n");
	for(i=0;i<9;i++){
		printf("%d  ", vet[i]);
	}
	
	for(i=0;i<9;i++){
		vet[i]=vet[i]+i;
	}
	
	printf("\n\n");
	for(i=0;i<9;i++){
		printf("%d  ", vet[i]);
	}
	
	printf("\n\n");
	printf("Digite um valor a ser buscado no vetor: ");
	scanf("%d", &num);
	
	for(i=0;i<9;i++){
		if(vet[i]==num){
			cont++;
		}
	}
	
	printf("O valor %d foi encontrado %d vezes no vetor", num, cont);
	
	return 0;
}
