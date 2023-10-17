#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	int c, l, mat[5][5], trans[5][5];
	
	for(l=0;l<5;l++){
		for(c=0;c<5;c++){
			mat[l][c]=(rand()%26);
			printf("%2d\t", mat[l][c]);
		}
		printf("\n");
	}
	
	printf("\nTransposta: \n");
	for(l=0;l<5;l++){
		for(c=0;c<5;c++){
			trans[l][c]=mat[c][l];
			printf("%2d\t", trans[l][c]);
		}
		printf("\n");
	}
		
	
	return 0;
}
