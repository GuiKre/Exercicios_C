#include <stdio.h>

int main(){
	
	float num, soma = 0, media;
	int contador = 0;
	
	while(contador<10){
		printf("\nDigite um numero: ");
		scanf("%f", &num);
		soma = soma + num;
		printf("Soma parcial: %.2f\n", soma);
		contador = contador + 1;
	}
	media = soma/10;
	printf("A media dos 10 numeros eh: %.2f", media);
	
	return 0;
}
