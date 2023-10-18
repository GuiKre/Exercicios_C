#include <stdio.h>

int main(){
	
	int num1, num2, mdc, cont, limite;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    if(num1 <= num2){
    	limite = num1;
	}
	else{
		limite = num2;
	}
	
	for(cont = 1; cont <= limite; cont++){
		
		if((num1 % cont == 0)&&(num2 % cont == 0)){//testa se ambos os valores são divisiveis por cont
		//em caso positivo, atualiza o valor do mdc
		mdc = cont;
		printf("MDC atualizado: %d \n", mdc);
		}
	}
	
    printf("O MDC dos dois numeros eh: %d\n", mdc);
	
	return 0;
}
