#include <stdio.h>

int main(){
	
	float compra, valorf;    
	
	printf("Digite o valor da compra: ");
	scanf("%f", &compra);
	
	if(compra >= 500.00){
		valorf = compra - (compra * 0.15);
		printf("Voce recebeu 15 por cento de desconto\nO valor total a ser pago sera: %.2f", valorf);
	}
	else if((compra >= 200.00)&&(compra <= 499.99)){
		valorf = compra - (compra * 0.10);
		printf("Voce recebeu 10 por cento de desconto\nO valor total a ser pago sera: %.2f", valorf);
	}
	else{
		valorf = compra - (compra * 0.05);
		printf("Voce recebeu 5 por cento de desconto\nO valor total a ser pago sera: %.2f", valorf);
	}
	return 0;
}
