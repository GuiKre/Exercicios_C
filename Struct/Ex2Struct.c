#include <stdio.h>

typedef struct{
	char data[11];
	char mandante[50];
	char visitante[50];
	int golm, golv;
}jogo;

int main(){
	
	jogo j[2];
	
	for(int i=0;i<2;i++){
		
		fflush(stdin);
		
		printf("Digite a data do jogo %d: ", i+1);
		scanf("%[^\n]s", j[i].data);
		
		fflush(stdin);
		
		printf("Digite o nome do time mandante do jogo %d: ", i+1);
		scanf("%[^\n]s", j[i].mandante);
		
		fflush(stdin);
		
		printf("Digite o nome do time visitenate do jogo %d: ", i+1);
		scanf("%[^\n]s", j[i].visitante);
		
		printf("Digite o numero de gols do time %s do jogo %d: ", j[i].mandante, i+1);
		scanf("%d", &j[i].golm);
		
		printf("Digite o numero de gols do time %s do jogo %d: ", j[i].visitante, i+1);
		scanf("%d", &j[i].golv);
		
		printf("\n");
	}
	
	for(int i=0;i<2;i++){
		printf("\n--------\n");
		printf("Data: %s\n", j[i].data);
		printf("Time mandante: %s\n", j[i].mandante);
		printf("Time visitante: %s\n", j[i].visitante);
		printf("Gols time %s: %d\n", j[i].mandante, j[i].golm);
		printf("Gols time %s: %d\n", j[i].visitante, j[i].golv);
		
		if(j[i].golm>j[i].golv){
			printf("O time %s venceu!!\n", j[i].mandante);
		}else if(j[i].golv>j[i].golm){
			printf("O time %s venceu!!\n", j[i].visitante);
		}else{
			printf("O jogo terminou empatado.\n");
		}
		printf("\n--------\n");
	}
	
	return 0;
}
