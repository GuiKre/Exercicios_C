#include <stdio.h>

int main(){
	int soma = 0;
	float num, resultado;
	char decisao = 'S';
	
	while((decisao == 'S') || (decisao == 's')){
		printf("\nDigite um numero que sera multipliado por 3: ");
		scanf("%f", &num);	
		resultado = num*3;
		printf("O resultado da multiplicacao eh: %.2f\n", resultado);
		
		soma = soma + resultado;
		printf("Soma parcial: %d\n\n", soma);
		
		printf("Deseja continuar? Digite S para sim: ");
		scanf(" %c", &decisao);
	}
	
	printf("\n--- Soma final %d --- \n", soma);
	return 0; 
}
