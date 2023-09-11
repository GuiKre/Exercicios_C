#include <stdio.h>

int main(){
	
	int final, a, b, soma;
	
	printf("Digite quantos minutos faltam para o final do expediente: ");
	scanf("%d", &final);
	
	printf("Digite quantos minutos leva para fabricar um presente: ");
	scanf("%d", &a);
	
	printf("Digite quantos minutos leva para fabricar o outro presente: ");
	scanf("%d", &b);
	
	soma = a+b;
	
	if(soma<=final){
		printf("Farei hoje!");
	}
	else if(soma>final){
		printf("Deixa para amanha!");
	}
	else{
		printf("Valor invalido");
	}
	
	
	return 0;
}
