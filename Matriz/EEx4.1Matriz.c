#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	int mat[10][15], c, l, soma;
	
	for(l=0;l<10;l++){
		for(c=0;c<15;c++){
			mat[l][c]=rand()%26;
			printf("%3d ", mat[l][c]);
		}
		printf("\n");
	}
	
	printf("\n");
	for(l=0;l<10;l++){
		soma=0;
		for(c=0;c<15;c++){
			soma=soma+mat[l][c];
		}
		printf("Linha %d: soma %d. ", l, soma);
		if(soma%2==0){
			printf("A soma eh par\n");
		}else{
			printf("A soma eh impar\n");
		}
	}
	
	printf("\n");
	for(c=0;c<15;c++){
		soma=0;
		for(l=0;l<10;l++){
			soma=soma+mat[l][c];
		}
		printf("Coluna %d: soma %d. ", c, soma);
		if(soma%2==0){
			printf("A soma eh par\n");
		}else{
			printf("A soma eh impar\n");
		}
	}
	return 0;
}
