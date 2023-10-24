#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int tam, tipo1=0, tipo2=0, tipo3=0, i;
	
	printf("Digite a quantidade de abastecimento: ");
	scanf("%d", &tam);
	
	int vet[tam];
	
	for(i=0;i<tam;i++){
		do{
			printf("Digite o tipo de abastecimento %d: ", i);
			scanf("%d", &vet[i]);
		}while(vet[i]>3||vet[i]<1);
	}
	
	for(i=0;i<tam;i++){
		if(vet[i]==1){
			tipo1++;
		}else if(vet[i]==2){
			tipo2++;
		}else{
			tipo3++;
		}
	}
	
	printf("Quantidade de abastecimentos: \n");
	printf("1 - %d \n2 - %d \n3 - %d \n", tipo1, tipo2, tipo3);
	return 0;
}
