#include <stdio.h>

int main(){
	
	float quico = 1.40, chaves = 1.10;
	int anos = 0;
	
	while(quico>chaves){
		
		quico = quico + 0.02;
		chaves = chaves + 0.03;
		
		/*printf("Um ano se passou.\n");
		printf("Quico cresceu 0.02 centimetros esse ano, enquanto Chaves cresceu 0.03 centimetros esse ano\n");*/
		
		anos = anos + 1;
		
		printf("Se passou %d anos.\n", anos);
		
	} 
	
	printf("Demorou %d anos para o Chaves passar o Quico em altura.", anos);
	
	return 0;
}
