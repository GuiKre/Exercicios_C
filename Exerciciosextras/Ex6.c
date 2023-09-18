#include <stdio.h>

int main(){
	
	int num;
    int cont = 0;

    do{
        printf("Digite um numero (ou 0 para sair): ");
        scanf("%d", &num);

        if (num >= 100 && num <= 200) {
            cont++;
        }
    }while(num>0);

    printf("Total de numeros entre 100 e 200 digitados: %d\n", cont);
	
	return 0;
}
