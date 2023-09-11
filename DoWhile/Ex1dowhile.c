#include <stdio.h>

int main(){
	
	int cont = 0;
	
	do{
		
	if(cont % 2 == 1){
		printf("%d\n", cont);
	}
	
	cont++;	
	}while(cont<20);
	
	
	return 0;
}
