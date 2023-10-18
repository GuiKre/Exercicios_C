#include <stdio.h>

int main(){
	
	int inicial, razao, i;
	
	printf("Digite o valor inicial: ");
	scanf("%d", &inicial);
	
	printf("Digite o valor da razao: ");
	scanf("%d", &razao);
	
	for(i=0; i<10; i++){
		printf("%d\n", inicial);
		inicial = inicial + razao;
	}
	
	return 0;
}
