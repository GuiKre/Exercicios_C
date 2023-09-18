#include <stdio.h>

int main(){
	
	int num, cont = 0, somanum = 0;
	float media;
	
	do{
		printf("Digite um numero inteiro positivo: ");
		scanf("%d", &num);
		
		if(num>0){
			somanum = somanum + num;
			cont++;
		}
	}while(num != 0);
	
	media = somanum/cont;
	
	printf("A media de todos os numeros digitados eh: %.2f", media);
	
	return 0;
}
