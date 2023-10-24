#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	int mat[3][5], l, c, soma;
	
	for(l=0;l<3;l++){
		for(c=0;c<5;c++){
			mat[l][c]=rand()%20+1;
			printf("%d\t", mat[l][c]);
		}
		printf("\n");
	}
	
	for(c=0;c<5;c++){
		soma=0;
		for(l=0;l<3;l++){
			soma=soma+mat[l][c];
		}
		if(soma<50){
			printf("Necessario comprar o item %d: Comprar pelos menos %d itens\n", c+1, 50-soma);
		}
	}
	
	return 0;
}
