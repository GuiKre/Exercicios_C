#include <stdio.h>
#include <string.h>

int main(){
	
	char palavra[100];
	int i, tam;
	
	printf("Digite uma string: ");
	//scanf("%100[^\n]", palavra);
	fgets(palavra,100,stdin);
	
	printf("String digitada: %s \n", palavra);
	
	tam=strlen(palavra);
	printf("Tamanho: %d\n", tam);
	
	printf("String ao contrario: ");
	for(i=tam-1;i>=0;i--){
		printf("%c", palavra[i]);
	}
	
	return 0;
}
