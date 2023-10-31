#include <stdio.h>
#include <stdlib.h>

float defpesoideal(char sexo, float altura){
	
	float pesoideal;
	
	if(sexo=='M'||sexo=='m'){
		pesoideal=(72.7*altura)-58.0;
	}else if(sexo=='F'||sexo=='f'){
		pesoideal=(62.1*altura)-44.7;
	}else{
		printf("Impossivel calcular.");
		exit(1);
	}
	
	return pesoideal;
}

int main(){
	
	char sexo;
	float altura, peso, result;
	
	printf("Digite o sexo(M/F): ");
	scanf(" %c", &sexo);
	
	printf("Digite o peso e a altura: ");
	scanf("%f %f", &peso, &altura);
	
	result=defpesoideal(sexo, altura);
	
	printf("Peso ideal: %2f\n", result);
	
	if(peso==result){
		printf("Esta no peso ideal");
	}else if(peso<result){
		printf("Esta abaixo do peso ideal");
	}else{
		printf("Esta acima do peso ideal");
	}
	
	return 0;
}
