#include <stdio.h>

int main(){
	
	int num1, num2, temp;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    do {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    } while (num2 != 0);

    printf("O MDC dos dois numeros eh: %d\n", num1);
	
	return 0;
}
