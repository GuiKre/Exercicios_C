#include <stdio.h>

int main(){
	
	float a, b, mult;
	
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	
	mult = a*b;
	
	if(mult > 0){
		printf("sinal positivo!");
	}
	else if(mult < 0){
		printf("sinal negativo!");
	}
	else{
		printf("nulo!");
	}
	return 0;
}
