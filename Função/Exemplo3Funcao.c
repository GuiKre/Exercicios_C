#include <stdio.h>

void troca(int *a, int *b){	
	
	int aux;
	
	aux=*a;
	*a=*b;
	*b=aux;
	
	printf("FUNCAO: depois da troca - A: %d | B: %d\n", *a, *b);
	
}

int main(){
	
	int a=2, b=4;

	printf("MAIN: antes da troca - A: %d | B: %d\n", a, b);	
	
	troca(&a, &b);
	
	printf("MAIN: depois da troca - A: %d | B: %d\n", a, b);
			
	return 0;
}
