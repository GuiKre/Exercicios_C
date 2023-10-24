#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	float vet[5], menor=10.0, maior=0.0, soma=0.0, media;
	int i;
	
	for(i=0;i<5;i++){
		vet[i]=(rand()%11)*1.0;
		printf("Nota %d: %.2f \n", i+1, vet[i]);
		
		soma=soma+vet[i];
		
		if(vet[i]>maior){
			maior=vet[i];
		}
		if(vet[i]<menor){
			menor=vet[i];
		}
	}
	
	printf("Menor nota: %.1f\n", menor);
	printf("Maior nota: %.1f\n", maior);
	
	media=(soma-menor-maior)/3.0;
	
	printf("Media das notas: %.1f", media);
	
	return 0;
}
