#include <stdio.h>

int main(){
	
	int a, b, i, t;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	printf("Digite um numero maior que o anterior: ");
	scanf("%d", &b);
	
	if(b<=a){
		printf("Segundo valor inferior ao primeiro.");
		return 1;
	}
	
	
	for(i=a; i<=b; i++){
		printf("Tabuada do %d\n", i);
		for(t=1; t<=10; t++){
			printf("%d x %d = %d\n", i, t, i*t);
		}
		printf("\n");
	}
	
	return 0;
}
