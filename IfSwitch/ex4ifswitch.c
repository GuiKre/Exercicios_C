#include <stdio.h>

int main(){
	
	int copias;
	float valort;
	
	printf("Digite a quantidade de copias desejada: ");
	scanf("%d", &copias);
	
	if((copias <= 100)&&(copias>=1)){
		valort = copias*0.25;
		printf("O valor total a ser pago sera: R$%.2f", valort);
	}
	else if(copias <= 0){
		printf("Erro!");
	}
	else{
		valort = 25.00 + (copias - 100)*0.20;
		printf("O valor total a ser pago sera: R$%.2f", valort);
	}
	
	
	return 0;
}
