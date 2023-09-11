#include <stdio.h>

int main() {
	
	float potencia_total, area, comprimento, largura;
	
	printf("Digite o comprimento do quarto: ");
	scanf("%f", &comprimento);
	
	printf("Digite a largura do quarto: ");
	scanf("%f", &largura);
	
	area = comprimento*largura;
	
	potencia_total = 18*area;
	
	printf("A area do quarto eh: %.2f metros quadrados\n", area);
	
	printf("A potencia total que deve ser usada eh: %.2f watts", potencia_total);
	
	
	return 0;
}
