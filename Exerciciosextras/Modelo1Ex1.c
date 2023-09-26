#include <stdio.h>

int main(){
	
	float p1, c1, p2, c2, mult1, mult2;
	
	do{
	printf("Digite o peso e o comprimento do lado esquerdo da gangorra (entre 10 e 100): ");
	scanf("%f%f", &p1, &c1);
	
	if((p1<10||p1>100)||(c1<10||c1>100)){
		printf("Valor invalido, digite novamente.\n");
	}
	}while((p1<10||p1>100)||(c1<10||c1>100));
	
	do{
	printf("Digite o peso e o comprimento do lado direito da gangorra (entre 10 e 100): ");
	scanf("%f%f", &p2, &c2);
	
	if((p2<10||p2>100)||(c2<10||c2>100)){
		printf("Valor invalido, digite novamente.\n");
	}
	}while((p2<10||p2>100)||(c2<10||c2>100));
	
	mult1 = p1*c1;
	mult2 = p2*c2;
	
	if(mult1==mult2){
		printf("Resultado = 0");
	}
	else if(mult1>mult2){
		printf("Resultado = -1");
	}
	else{
		printf("Resultado = 1");
	}
	return 0;
}
