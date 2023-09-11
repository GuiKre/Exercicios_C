#include <stdio.h>

int main(){
	
	float num;
	int cont1=0, cont2=0, cont3=0, cont4=0;
	
	do{
		printf("\nDigite um numero:");
		scanf("%f", &num);
		
	if((num>=0)&&(num<=25)){
		printf("Intervalo [0,25]\n");
		cont1++;
	}
	else if((num>=26)&&(num<=50)){
		printf("Intervalo [26,50]\n");
		cont2++;
	}
	else if((num>=51)&&(num<=75)){
		printf("Intervalo [51,75]\n");
		cont3++;
	}
	else if((num>=76)&&(num<=100)){
		printf("Intervalo [76,100]\n");
		cont4++;
	}
	else{
		printf("Nao faz parte de nenhum intervalo.\n");
	}
	
	}while(num > 0);
		
	printf("\nTotal de numero no intervalo [0,25]: %d\nTotal de numero no intervalo [26,50]: %d\nTotal de numero no intervalo [51,75]: %d\nTotal de numero no intervalo [76,100]: %d\n", cont1, cont2, cont3, cont4);
	
	return 0;
}
