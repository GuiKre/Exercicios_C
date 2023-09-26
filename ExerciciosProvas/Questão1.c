#include <stdio.h>

int main(){
	
	int colocacao;
	
	do{
	printf("Digite a sua colocacao na maratona: ");
	scanf("%d", &colocacao);
		if((colocacao < 1)||(colocacao > 100)){
			printf("Colocacao invalida, favor digite outro numero.\n");
		}
	}while((colocacao < 1)||(colocacao > 100));
	
	if(colocacao>50){
		printf("Top 100.");
	}
	else if((colocacao>25)&&(colocacao<51)){
		printf("Top 50.");
	}
	else if((colocacao>10)&&(colocacao<26)){
		printf("Top 25.");
	}
	else if((colocacao>5)&&(colocacao<11)){
		printf("Top 10.");
	}
	else if((colocacao>3)&&(colocacao<6)){
		printf("Top 5.");
	}
	else if((colocacao>1)&&(colocacao<4)){
		printf("Top 3.");
	}
	else{
		printf("Top 1.");
	}
	return 0;
}
