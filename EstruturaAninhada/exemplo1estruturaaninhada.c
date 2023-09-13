#include <stdio.h>

int main(){
	
	int i, num;
	
	do{
		printf("\nDigite um numero inteiro positivo. ");
		printf("Digite 0 para sair: ");
		scanf("%d", &num);
		
		if(num < 0){
			printf("Digite valores positivos. \n");
		} 
		else if(num == 0){
			printf("Encerrando a execucao...");
		}
		else{
			for (i = 0; i < num; i++){
				printf("*");
			}
		}
	}while(num != 0);
	return 0;
}
