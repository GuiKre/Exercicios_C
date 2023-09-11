#include <stdio.h>

int main(){
	
	float valor;
	
	printf("Digite um valor de 0 a 100: ");
	scanf("%f", &valor);
	
	if((valor>=0.00)&&(valor<=25.00)){
		printf("O valor pertence ao intervalo [0,25]");
	}
	else if((valor>25.00)&&(valor<=50.00)){
		printf("O valor pertence ao intervalo [25,50]");
	}
	else if((valor>50.00)&&(valor<=75.00)){
		printf("O valor pertence ao intervalo [50,75]");
	}
	else if((valor>75.00)&&(valor<=100.00)){
		printf("O valor pertence ao intervalo [75,100]");
	}
	else{
		printf("Valor invalido!");
	}
	
	return 0;
}
