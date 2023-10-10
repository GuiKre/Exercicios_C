#include <stdio.h>
#include <string.h>

int main(){
	
	char frase[200];
	int j, tam, a=0, e=0, i=0, o=0, u=0;
	
	printf("Digite uma string: ");
	fgets(frase,200,stdin);
	
	tam=strlen(frase);
	
	for(j=0;j<tam-1;j++){
		frase[j]=toupper(frase[j]);	
	}
	
	puts(frase);
	
	for(j=0;j<tam-1;j++){
		switch(frase[j]){
			case'A':a++; break;
			case'E':e++; break;
			case'I':i++; break;
			case'O':o++; break;
			case'U':u++; break;
		}
	}
	
	printf("A: %d\nE: %d\nI: %d\nO: %d\nU: %d", a, e, i, o, u);
	
	return 0;
}
