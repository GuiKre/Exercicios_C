#include <stdio.h>

void deposito(float saldo[], int qtd){	
	float valorDeposito;
	int conta;
	
	printf("Qual conta recebera o deposito? ");
	scanf("%d", &conta);
	
	if(conta>=0&&conta<qtd){
		printf("Digite o valor a ser depositado: ");
		scanf("%f", &valorDeposito);
	
		saldo[conta]+=valorDeposito;
		printf("Saldo atualizado: %.2f\n", saldo[conta]);
	}else{
		printf("Conta inexistente.\n");
	}
}

void saque(float saldo[], int qtd){
	float valorSaque;
	int conta;
	
	printf("Qual conta recebera o saque? ");
	scanf("%d", &conta);
	
	if(conta>=0&&conta<qtd){
		printf("Valor do saque: ");
		scanf("%f", &valorSaque);
		
		if(valorSaque>saldo[conta]){
			printf("Saldo insuficiente.\n");
		}else{
			saldo[conta]-=valorSaque;
			printf("Saldo atualizado: %.2f\n", saldo[conta]);
		}
	}else{
		printf("Conta inexistente.\n");
	}
}

void verificaSaldo(float saldo[], int qtd){
	for(int i=0;i<qtd;i++){
		printf("Saldo conta %d: %.2f\n", i, saldo[i]);
	}
}

void saldoInicial(float saldo[], int qtd){
	printf("---Bem vindo(a) ao Banco CCC---\n");
	printf("Digite o saldo inicial: \n");
	
	for(int i=0;i<qtd;i++){
		printf("Conta %d: ", i);
		scanf("%f", &saldo[i]);
	}
}

int main(){
	
	int opcao, qtd;
	
	printf("Digite a quantidade de contas: ");
	scanf("%d", &qtd);
	
	float saldo[qtd];
	
	saldoInicial(saldo, qtd);
	
	do{
		printf("\nMenu de operacoes: \n");
		printf("[1] Deposito\n");
		printf("[2] Saque\n");
		printf("[3] Verificar Saldo\n");
		printf("[0] Sair do Programa\n");
		
		printf("\nOperacao a ser realizada: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1: deposito(saldo, qtd); break;
			case 2: saque(saldo, qtd); break;
			case 3: verificaSaldo(saldo, qtd); break;
			case 0: printf("Finalizando o programa\n"); break;
			default: printf("Opcao invalida. Tente novamente\n"); break;
		}
	}while(opcao!=0);
	
	
	return 0;
}
