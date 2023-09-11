#include <stdio.h>

int main(){
	
	float salatual, novosal, aumento = 0;
	
	printf("Digite seu salario atual: ");
	scanf("%f", &salatual);
	
	if(salatual >= 0 && salatual <= 1400){
		aumento = 0.15;
	}
	else if(salatual <= 2000){
		aumento = 0.12;
	}
	else if(salatual <=3000){
		aumento = 0.10;
	}
	else if(salatual <=3800){
		aumento = 0.07;
	}
	else if(salatual <=5000){
		aumento = 0.04;
	}
	novosal = salatual + (salatual * aumento);
	
	if(aumento > 0){
		printf("Aumento de: %.2f por cento \n", aumento * 100);
		printf("Novo salario de: %.2f", novosal);
	}
	else{
		printf("Nao ha aumento de salaio para quem ja ganha mais de 5000 por mes");
	}

	
	return 0;
}
