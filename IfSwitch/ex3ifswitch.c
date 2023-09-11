#include <stdio.h>

int main(){
	
	int a, b, resto1, resto2;
	//float resto;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	resto1 = a%b;
	resto2 = b%a;
	
	if((resto1 == 0) || (resto2 == 0)){ //&& (resto <=1)){
		printf("Sao multiplos!");
	}
	else{
		printf("Nao sao multiplos!");
	}
	return 0;
}
