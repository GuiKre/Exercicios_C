#include <stdio.h>

int main(){
	
	int num, i, j = 0, ponto = 0;
	
	printf("Digite o numero de linhas que se tornarao *: ");
	scanf("%d", &num);
	
	
	
	do{
		for(i = 0; i < num; i++){
			ponto = ponto + 1;
			printf("%d", ponto);
		}
		j++;
	}while(j < num);
	return 0;
}
