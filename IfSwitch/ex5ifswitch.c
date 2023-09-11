#include <stdio.h>

int main(){
	
	float d;
	
	printf("Digite a distancia da cesta: ");
	scanf("%f", &d);
	
	if((d>=0)&&(d<=800)){
		printf("A cesta vale 1 ponto!");
	}
	else if((d>=801)&&(d<=1400)){
		printf("A cesta vale 2 pontos!");
	}
	else if((d>=1401)&&(d<=2000)){
		printf("A cesta vale 3 pontos!");
	}
	else{
		printf("valor invalido!");
	}
	
	return 0;
}
