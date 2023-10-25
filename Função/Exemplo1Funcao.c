#include <stdio.h>

int leValor(){
	int num;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &num);
	
	return num;
}

void imprimeValores(int a, int b){
	int i;
	
	if(a<=b){
		for(i=a;i<=b;i++){
			printf("%d ", i);
		}
	}else{
		printf("A deve ser menor que B.");
	}
}

int main(){
	
	int a, b;
	char resp;
	
	do{		
		a=leValor();
		b=leValor();
		
		imprimeValores(a, b);
		
		printf("\nDeseja continuar[S/N]? ");
		scanf(" %c", &resp);
	}while(resp=='s'||resp=='S');
	
	return 0;
}
