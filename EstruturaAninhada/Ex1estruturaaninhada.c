#include <stdio.h>

int main(){
	
	int num;
	//float resultado;
	
	for(num = 0; num <= 1000; num++){
		if(num % 7 == 0){
			printf("%d\n", num);
		}
	}
	
	return 0;
}
