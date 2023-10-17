#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	int c, l;
	float mat[5][5], vet[5];
	
	for(l=0;l<5;l++){
		for(c=0;c<5;c++){
			mat[l][c]=(rand()%26)*1.0;
			printf("%.1f\t", mat[l][c]);
		}
		printf("\n");
	}
	
	printf("\nVetor preenchido\n");
	for(l=0;l<5;l++){
		vet[l]=mat[l][l];
		printf("%.1f\t", vet[l]);
	}
	
	return 0;
}
