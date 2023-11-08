#include <stdio.h>

typedef struct{
	char nome[50];
	float peso, altura, imc;
}atleta;
	
int main(){
	
	atleta a[3];
	
	for(int i=0;i<3;i++){
		
		fflush(stdin); //limpa o  buffer do teclado
		
		printf("\nDigite o nome %d: ", i+1);
		scanf("%[^\n]s", a[i].nome);
		
		printf("\nDigite o peso %d: ", i+1);
		scanf("%f", &a[i].peso);
		
		printf("\nDigite a altura %d: ", i+1);
		scanf("%f", &a[i].altura);
		
		a[i].imc = a[i].peso/(a[i].altura*a[i].altura);
	}
	
	for(int i=0;i<3;i++){
		printf("\n-------\n");
		printf("Nome: %s\n", a[i].nome);
		printf("Peso: %.2f\n", a[i].peso);
		printf("Altura: %.2f\n", a[i].altura);
		printf("IMC: %.2f\n", a[i].imc);
		printf("\n-------\n");
	}
	return 0;
}
