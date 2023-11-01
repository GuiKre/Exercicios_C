#include <stdio.h>

//soma obtida por fun��o por retorno

/*int somadivisores(int num){
	
int i, soma=0;
	
for(i=1;i<num;i++){
	if(num%i==0){
		printf("O numero %d eh divisivel por %d\n", num, i);
		soma=soma+i;
	}
}
	
return soma;
}*/

//soma obtida por fun��o com passagem de par�metro por refer�ncia
int somadivisores(int num, int *result){
	
	int i;
	*result=0;
	
	for(i=1;i<num;i++){
		if(num%i==0){
			printf("O numero %d eh divisivel por %d\n", num, i);
			*result=*result+i;
		}
	}
	
	return *result;
}

void imprimeperfeito(int result, int num){
	
	if(result==num){
		printf("O numero eh perfeito.\n");
	}else{
		printf("O numero nao eh perfeito.\n");
	}	
}

int main(){
	
	int num, result;
	
	printf("Digite um inteiro: ");
	scanf("%d", &num);
	
	//result=somadivisores(num); //result obtido pelo retorno
	
	somadivisores(num, &result); //result obtido por refer�ncia
	
	imprimeperfeito(num, result);
	
	return 0;
}
