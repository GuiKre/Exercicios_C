#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	int mat[3][10], l, c, acertos=0;
	
	for(l=0;l<3;l++){
		for(c=0;c<10;c++){
			if(l==0){
				mat[l][c]=rand()%5+1;
			}else if(l==1){
				do{
				printf("Digite a resposta da questao %d: ", c);
				scanf("%d", &mat[l][c]);
				}while(mat[l][c]<1||mat[l][c]>5);
			}else{
				if(mat[0][c]==mat[1][c]){
					mat[2][c]=1;
					acertos++;
				}else{
					mat[2][c]=0;
				}
			}
		}
	}
	
	for(l=0;l<3;l++){
		for(c=0;c<10;c++){
			printf("%d\t", mat[l][c]);
		}
		printf("\n");
	}
	
	printf("\nTotal de acertos: %d", acertos);
	return 0;
}
