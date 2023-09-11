#include <stdio.h>

int main(){
	
	int num, tabuada = 0, resultado;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);
	
	while(tabuada < 10){
		
		tabuada = tabuada + 1;
		
		resultado = num * tabuada;
		
		printf("\nResultado: %d", resultado);
		
	}
	
	return 0;
}
