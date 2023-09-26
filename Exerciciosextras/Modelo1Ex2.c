#include <stdio.h>

int main(){
	
	int qj, i;
	float vj, maisrapido = 0.0;
	
	printf("Digite a quantidade de jabutis(1 a 100): ");
	scanf("%d", &qj);
	
	for(i=1; i<=qj; i++){
		printf("Digite a velocidade do jabuti %d(em m/h): ", i);
		scanf("%f", &vj);
		
		if(vj>maisrapido){
			maisrapido = vj;
		}
	}
	
	if(maisrapido<180.0){
		printf("O jabuti mais rapido eh nivel 1.");
	}
	else if((maisrapido>=180.0)&&(maisrapido<250.0)){
		printf("O jabuti mais rapido eh nivel 2.");
	}
	else{
		printf("O jabuti mais rapido eh nivel 3.");
	}
	
	return 0;
}
