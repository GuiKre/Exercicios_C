#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	int mat[4][4], l, c, mult=1;
	
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			mat[l][c]=rand()%10+1;
			printf("%3d", mat[l][c]);
			
			if(l==c){
				mult=mult*mat[l][c];
			}
		}
		printf("\n");
	}
	
	/*for(l=0;l<4;l++){
		mult=mult+mat[l][l];
	}*/	
	
	printf("\nMultiplicacao da diagonal principal: %d", mult);
	
	return 0;
}
