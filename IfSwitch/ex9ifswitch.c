#include <stdio.h>

int main(){
	
	float nota;
	
	printf("Digite a nota: ");
	scanf("%f", &nota);
	
		if(nota == 0){
			printf("Nota E");
		}
		else if((nota>=1)&&(nota<=35)){
			printf("Nota D");
		}
		else if((nota>=36)&&(nota<=60)){
			printf("Nota C");
		}
		else if((nota>=61)&&(nota<=85)){
			printf("Nota B");
		}
		else if((nota>=86)&&(nota<=100)){
			printf("Nota A");
		}
		else{
			printf("Valor invalido");
		}
	return 0;
}
