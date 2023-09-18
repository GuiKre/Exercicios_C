#include <stdio.h>

int main(){
	
	int soma = 0, i;
	
	for(i=1; i<=500; i++){
		if((i%2!=0)&&(i%3==0)){
			soma = soma + i;
		}
	}
	printf("A soma dos numeros impares de 1 ate 500 eh: %d", soma);
	
	return 0;
}
