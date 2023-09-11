#include <stdio.h>

int main(){
	
	int cod, quantia;
	float preco;
	
	printf("Digite o codigo do alimento: ");
	scanf("%d", &cod);
	
	printf("Digite a quantidade: ");
	scanf("%d", &quantia);
	
	switch (cod) {
		case 1: preco = 12.00*quantia; break;
		case 2: preco = 15.50*quantia; break;
		case 3: preco = 18.00*quantia; break;
		case 4: preco = 8.00*quantia; break;
		case 5: preco = 4.50*quantia; break;
		default: printf("valor invalido"); return 1; break;	
	}
	printf("voce devera pargar: R$%.2f", preco);
	
	return 0;
}
