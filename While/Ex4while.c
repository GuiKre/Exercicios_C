#include <stdio.h>

int main(){
	
	int par = 0, contador = 0;
	float media;
	
	while(par < 100){
		
		par = par + 2;
		printf("Par: %d\n", par);
		
		contador = contador + 1;
		printf("Contador: %d\n", contador);
		
	}
	media = par / 50;
	printf("A media dos numeros pares de 1 a 100 eh: %.2f", media);
	
	return 0;
}
