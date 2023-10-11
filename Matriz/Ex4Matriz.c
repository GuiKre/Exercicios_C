#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	int mat[3][4], l, c, soma[3], mult[4];
	
	for(l=0;l<3;l++){
		for(c=0;c<4;c++){
			mat[l][c]=rand()%10+1;
			printf("%3d", mat[l][c]);
		}
		printf("\n");
	}
	
	printf("\nVetor de soma das linhas:\n");
	for(l=0;l<3;l++){
		soma[l]=0;
		for(c=0;c<4;c++){
			soma[l]=soma[l]+mat[l][c];
		}
		printf("%3d ", soma[l]);
	}
	
	printf("\nVetor de multiplicacao das colunas: \n");
	for(c=0;c<4;c++){
		mult[c]=1;
		for(l=0;l<3;l++){
			mult[c]=mult[c]*mat[l][c];
		}
		printf("%3d ", mult[c]);
	}	
	return 0;
}
