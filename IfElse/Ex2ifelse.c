#include <stdio.h>

int main(){
	
	int n;
	
	printf("Digite um numero inteiro positivo ou negativo: ");
	scanf("%d", &n);
	
	if(n < 0){
		n = n* -1;
	}
	
	printf("%d", n);	
	return 0;
}
