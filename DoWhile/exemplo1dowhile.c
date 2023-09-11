#include <stdio.h>

int main(){
	
	int mult = 1, num;
	
	do{
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		
		mult = mult * num; //multiplica o novo num pelos anteriores
		printf("Multiplicacao parcial: %d \n", mult);
		
	}while(mult <= 100);
	
	
	return 0;
}
