#include <stdio.h>

int main(){
	
	int i;
	float vet1[4], vet2[4];
	float subtracao = 0;
	
	for(i=0; i<=3; i++){
		printf("Digite o valor do indice %d do vetor 1: ", i);
		scanf("%f", &vet1[i]);
		
		printf("Digite o valor do indice %d do vetor 2: ", i);
		scanf("%f", &vet2[i]);
		
		/*subtracao = vet1[i]-vet2[i];
		
		printf("Resultado %d: %.2f\n", i, subtracao);*/

	}
	
	for(i=0; i<=3; i++){
	subtracao = vet1[i]-vet2[i];	
	printf("Resultado: %.2f\n", subtracao);
	}
	return 0;
}
