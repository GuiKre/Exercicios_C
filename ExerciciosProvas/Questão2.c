#include <stdio.h>

int main(){
	
	int i, groselha, tamarindo, somag=0, somat=0;
	
	for(i=1; i<=3; i++){
		do{
			printf("Digite a pontuacao do time tamarindo no jogo %d: ", i);
			scanf("%d", &tamarindo);
			if(tamarindo<0){
				printf("Pontuacao invalida, digite outro numero.\n-------\n");
			}
		}while(tamarindo<0);
		
		do{
			printf("Digite a pontuacao do time groselha no jogo %d: ", i);
			scanf("%d", &groselha);
			if(groselha<0){
				printf("Pontuacao invalida, digite outro numero.\n-------\n");
			}
		}while(groselha<0);
		
		if(tamarindo>groselha){
			printf("Time Tamarindo venceu o jogo %d, conquistando 3 pontos.\n-------\n", i);
			somat=somat+3;		
		}
		else if(groselha>tamarindo){
			printf("Time Groselha venceu o jogo %d, conquistando 3 pontos.\n-------\n", i);
			somag=somag+3;
		}
		else if(groselha==tamarindo){
			printf("jogo %d terminou empatado, ambos os times ganharam 1 ponto.\n-------\n", i);
			somat=somat+1;
			somag=somag+1;
		}
	}
	
	if(somat>somag){
		printf("Time Tamarindo venceu a Copa da Vila com o placar final de %d a %d", somat, somag);
	}
	else if(somag>somat){
		printf("Time Groselha venceu a Copa da Vila com o placar final de %d a %d", somag, somat);
	}
	else{
		printf("A Copa da Vila terminou empatada com o placar final de %d e %d", somag, somat);
	}
	
	return 0;
}
