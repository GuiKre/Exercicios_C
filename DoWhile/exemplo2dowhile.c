#include <stdio.h>

int main(){
	
	int  num, somaimpar = 0, somapar = 0, cont = 0;
	float media;
	
	do{
		printf("\nDigite um numero inteiro: ");
		scanf("%d", &num);
		
		if(num % 2 == 1){
			somaimpar = somaimpar + num;
		}
		else{
			somapar = somapar + num;
			cont++;
		}
	}while(num != 0);
	
	media = somapar / cont;
	
	printf("A soma dos numeros impares eh: %d\n", somaimpar);
	printf("A media dos numeros pares eh: %.2f", media);
	
	return 0;
}
