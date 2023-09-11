#include <stdio.h>

int main(){
	
	float n1, n2, n3, n4, media, exame, mediafinal;
	
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	printf("Digite a nota 3: ");
	scanf("%f", &n3);
	printf("Digite a nota 4: ");
	scanf("%f", &n4);
	
	media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
	
	if(media>=7.0){
		printf("Media: %.2f\nAluno aprovado!!", media);
	}
	else if(media<5.0){
		printf("Media: %.2f\nAluno reprovado!!", media);
	}
	else if((media>=5.0)&&(media<=6.9)){
		printf("Aluno em exame!!");
		printf("Nota do exame: ");
		scanf("%f", &exame);
		mediafinal = (exame + media)/2;
		if(mediafinal >=5.0){
			printf("Aluno aprovado!!\nMedia final: %.2f", mediafinal);
		}
		else if(mediafinal <5.0){
			printf("Aluno reprovado!!\nMedia final: %.2f", mediafinal);
		}
	}
	
	
	return 0;
}
