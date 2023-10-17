#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	int vetA[10], i;
	float vetB[10];
	
	for(i=0;i<10;i++){
		do{
			vetA[i]=rand()%20+1;
		}while(vetA[i]%2!=0);
		printf("Indice %d: %d\n", i, vetA[i]);
	}
	
	printf("\n\nVetor resultante: \n");
	for(i=0;i<10;i++){
		if(i%2==0){
			vetB[i]=vetA[i]/2.0;
		}else{
			vetB[i]=vetA[i]*3.0;
		}
		printf("indice %d: %.0f\n", i, vetB[i]);;
	}
	
	return 0;
}
