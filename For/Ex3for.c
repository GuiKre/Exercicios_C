#include <stdio.h>

int main(){
	
	int razao, i;
	float inicial;
	printf("Digite o valor inicial: ");
	scanf("%f", &inicial);
	
	printf("Digite o valor da razao: ");
	scanf("%d", &razao);
	
	for(i=0; i<10; i++){
		printf("%.2f\n", inicial);
		inicial = inicial * razao;
	}
	
	return 0;
}
