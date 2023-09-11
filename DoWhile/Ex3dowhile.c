#include <stdio.h>

int main(){
	
	int num, somapositivo = 0, somanegativo = 0;
	
	do{
		printf("\nDigite um numero inteiro positivo ou negativo: ");
		scanf("%d", &num);
		
		if(num > 0){
			somapositivo = somapositivo + num;
		}
		else if(num < 0){
			somanegativo = somanegativo + num;
		}
		else{
			printf("Valor invalido.\n");
		}
	}while(num != 0);
	
	printf("A soma dos numeros positivos eh: %d\n", somapositivo);
	printf("A soma dos numeros negativos eh: %d", somanegativo);
	
	return 0;
}
