#include <stdio.h>

int main(){
	
	int num, i, linhas;
	
	printf("Digite o numero de linhas que se tornarao *: ");
	scanf("%d", &num);
	
	if(num<=0){
		printf("Numero invalido.\n");
		return 1;
	}	
	for(linhas=1; linhas<=num; linhas++){
		for(i=1; i<=linhas; i++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
