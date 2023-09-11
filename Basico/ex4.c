#include <stdio.h>

int main() {
	
	float atual_devido, total_devido, dias_atraso, percentual, percentual_dia;
	
	printf("Digite o valor total devido: ");
	scanf("%f", &atual_devido);
	
	printf("Digite a quantidade de dias atrasados: ");
	scanf("%f", &dias_atraso);
	
	printf("Digite o percentual de multa: ");
	scanf("%f", &percentual);
	
	percentual_dia = percentual*dias_atraso;
	
	total_devido = atual_devido*(1+percentual_dia/100);
	
	printf("O valor total devido eh: %.2f", total_devido);
	
	
	
	
	
	
	return 0;
}
