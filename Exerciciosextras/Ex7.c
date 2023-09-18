#include <stdio.h>

int main(){
	
	int limite_inferior, limite_superior, soma = 0, i;

    printf("Limite inferior: ");
    scanf("%d", &limite_inferior);

    printf("Limite superior: ");
    scanf("%d", &limite_superior);

    if (limite_inferior >= limite_superior) {
        printf("O limite inferior deve ser menor que o limite superior.\n");
        return 1;
    }

    printf("Numeros pares no intervalo aberto [%d, %d):\n", limite_inferior, limite_superior);

    for (i = limite_inferior + 1; i < limite_superior; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            soma += i;
        }
    }

    printf("\nSoma dos numeros pares: %d\n", soma);
	
	return 0;
}
