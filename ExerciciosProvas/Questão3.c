#include <stdio.h>

int main(){
	
	float salj1, salj2, salr, receitamensal, receitatual, despesa, despesafinal = 0.00;
	int i = 0;
	
	do{
		printf("Digite o primeiro salario do Julius: ");
		scanf("%f", &salj1);
		if(salj1<0.00){
			printf("Valor invalido, digite novamente.\n");
		}
	}while(salj1<0.00);
	
	do{
		printf("Digite o outro salario do Julius: ");
		scanf("%f", &salj2);
		if(salj2<0.00){
			printf("Valor invalido, digite novamente.\n");
		}
	}while(salj2<0.00);
	
	do{
		printf("Digite o salario da Rochelle: ");
		scanf("%f", &salr);
		if(salr<0.00){
			printf("Valor invalido, digite novamente.\n");
		}
	}while(salr<0.00);
	
	receitamensal = salj1 + salj2 + salr;
	receitatual = salj1 + salj2 + salr;
	printf("Receita mensal: %.2f\n-----\n", receitamensal);
	
	do{
		i++;
		printf("Digite a valor da despesa %d: ", i);
		scanf("%f", &despesa);
		
		despesafinal = despesafinal + despesa;
		
		if(despesa<=receitatual/2){
			printf("Eu nao preciso disso, meu marido tem dois empregos.\nDespesa parcial: %.2f\n-----\n", despesafinal);
		}
		else if((despesa>receitatual/2)&&(despesa<=receitatual)){
			printf("Se voce nao comprar nada, o desconto eh bem maior.\nDespesa parcial: %.2f\n-----\n", despesafinal);
		}		
		receitatual = receitatual - despesa;
		printf("Receita atual: %.2f\n", receitatual);
	}while(despesafinal<=receitamensal);

	printf("Ei carinha que mora logo ali, me passa um dolar.\nDespesa final: %.2f\n-----\n", despesafinal);

	return 0;
}
