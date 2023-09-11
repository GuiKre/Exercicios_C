#include <stdio.h>

int main() {
	
	float sal_atual, porc_aumento, novo_valor, valor_aum;
	
	printf("Digite seu salario atural: ");
	scanf("%f", &sal_atual);
	
	printf("Digite a porcentagem de aumento: ");
	scanf("%f", &porc_aumento);
	
	novo_valor = sal_atual*(1+porc_aumento/100);
	
	valor_aum = novo_valor - sal_atual;
	
	printf("Valor de aumento: %.2f\n", valor_aum);
	
	printf("Novo valor: %.2f", novo_valor);
	
	
	
	return 0;
}
