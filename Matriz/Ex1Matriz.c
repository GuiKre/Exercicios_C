#include <stdio.h>

int main(){
	
	int i, j, mult[11][11];
	
	for(i=0;i<11;i++){
		for(j=0;j<11;j++){
			mult[i][j]=i*j;
			printf("%3d ",mult[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
