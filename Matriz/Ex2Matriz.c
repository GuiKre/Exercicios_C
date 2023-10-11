#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL)); //inicializa semente aleatoria
		
	int mat[3][5], l, c, soma=0;
	
	for(l=0;l<3;l++){
		for(c=0;c<5;c++){
			mat[l][c]=rand()%100;
			printf("%2d ", mat[l][c]);
		}
		soma+=mat[l][4]; 
		printf("\n");
	}
	
	printf("Soma da ultima coluna: %d", soma);
	
	return 0;
}
