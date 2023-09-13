#include <stdio.h>

int main(){
	
	int num, menor, maior, primeiro = 1;
	
	do{
		printf("Digite um numero inteiro positivo(ou 0 para sair): ");
		scanf("%d", &num);
		
		if(num < 0){
			printf("Valor invalido!\n");
			break;
		}
		
		else if(num > 0){
		
			if(primeiro == 1){
				menor = num;
				maior = num;
				primeiro = 0;
		}
			else{
				if(num < menor){
				menor = num;
				}
				else if(num > maior){
				maior = num;
				}
			}
		}
	}while(num != 0);
	
	if(primeiro == 1){
		printf("Nenhum numero inteiro positivo foi digitado.\n");
	}
	else{
		printf("o menor numero digitado foi: %d\n", menor);
		printf("O maior numero digitado foi: %d\n", maior);
	}
	
	return 0;
}
