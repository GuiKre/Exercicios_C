#include <stdio.h>

typedef struct{
	char nome[100];
	float salario;
	int anos;
	int cargo;
}dados;

int main(){
	
	int ch;
	int funcionarios;
	
	printf("Digite o numero de funcioanrios na empresa: ");
	scanf("%d", &funcionarios);
	
	dados d[funcionarios];
	
	for(int i=0;i<funcionarios;i++){
		printf("Digite o nome do funcionario %d: ", i+1);
		ch = getchar();
		scanf("%[^\n]s", d[i].nome);
		
		printf("Digite o salario do funcionario %d: ", i+1);
		scanf("%f", &d[i].salario);
		
		printf("Digite os anos de experiencia na empresa do funcionario %d: ", i+1);
		scanf("%d", &d[i].anos);
		
		printf("Digite o cargo do funcionario %d: ", i+1);
		scanf("%d", &d[i].cargo);
	}
	
	for(int i=0;i<funcionarios;i++){
		printf("Nome %d: ", i+1);

		printf("Salario %d: ", i+1);

		printf("Anos de experiencia %d: ", i+1);
		
		printf("Cargo %d: ", i+1);
	}
	
	return 0;
}
