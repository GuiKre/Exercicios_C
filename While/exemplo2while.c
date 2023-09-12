#include <stdio.h>

int main(){
	
	int cont = 1, soma = 0;
	
	while(cont <= 100){
		soma = soma + cont;
		cont++;
	}
	printf("O valor da soma de todos os numero inteiros de 1 a 100 eh: %d", soma);
	return 0;
}
