#include <stdio.h>

int main(){
	
	float salatual, novosal;
	
	printf("Digite seu salario atual: ");
	scanf("%f", &salatual);
	
	if(salatual <= 1400.00){
		novosal = salatual + (salatual * 0.15);
		printf("Seu salario sera aumentado em 15 por cento\nSeu salario novo eh: %.2f", novosal);
	}
	else if(salatual <= 2000.00){
		novosal = salatual + (salatual * 0.12);
		printf("Seu salario sera aumentado em 12 pir cento\nSeu salario novo eh: %.2f", novosal);
	}
	else if(salatual <= 3000.00){
		novosal = salatual + (salatual * 0.10);
		printf("Seu salario sera aumentado em 10 por cento\nSeu salario novo eh: %.2f", novosal);
	}
	else if(salatual <= 3800.00){
		novosal = salatual + (salatual * 0.07);
		printf("Seu salario sera aumentado em 7 por cento\nSeu salario novo eh: %.2f", novosal);
	}
	else if(salatual <= 5000.00){
		novosal = salatual + (salatual * 0.04);
		printf("Seu salario sera aumentado em 4 por cento\nSeu salario novo eh: %.2f", novosal);
	}
	else{
		printf("Quem recebe mais de R$5000.00 de salario nao recebe aumento >:C");
	}
	
	return 0;
}
