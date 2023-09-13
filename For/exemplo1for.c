#include <stdio.h>

int main(){
	
	int cont, num, erro;
	double resultado = 1.0;
	
	do{
		erro = 0;
		printf("Qual fatorial voce deseja saber [0, 170]? ");
		scanf("%d", &num);
		
		if((num < 0)||(num > 170)){
			printf("Numero fora do intervalo. Tente novamente.\n");
			erro = 1;
		}
	}while(erro == 1);
	
	for(cont = 1; cont <= num; cont++){
		resultado = resultado * cont;
		
		printf("cont: %d fatorial atual: %.2lf \n", cont, resultado);
	}
	
	printf("Resultado: %.2lf", resultado);
	return 0;
}
