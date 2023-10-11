#include <stdio.h>
#include <string.h>

int main(){
	
	char palavra[200], letra;
	int i, tam, ultindice = -99;
	
	printf("Digite uma string: ");
	fgets(palavra,200,stdin);
	
	printf("Digite um caractere a ser pesquisado: ");
	scanf(" %c", &letra);
	
	printf("String digitada: %s \n", palavra);
	
	tam=strlen(palavra);
	printf("Tamanho: %d\n", tam);
	
		for(i=0;i<tam-1;i++){
		if(palavra[i]==letra){
			printf("Econtrou o caractere %c no indice %d\n", letra, i);
			ultindice = i;
		}
	}
	
	if(ultindice>=0){
		printf("Ultimo indice onde o caractere foi encontrado: %d", ultindice);
	} else{
		printf("O caractere nao foi encontrado na string.");
	}
	
	return 0;
}
