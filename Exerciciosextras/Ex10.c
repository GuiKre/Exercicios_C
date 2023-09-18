#include <stdio.h>

int main(){
	
	int num_carteira, num_multas, maior_num_multas = 0, i;
    double valor_multa, valor_divida, total_recursos = 0.0;
    int motorista_maior_multas = 0;

    printf("Informe os dados dos motoristas (ou 0 para encerrar):\n");

    while (1) {
        printf("\nNumero da carteira de motorista (1 a 4327, 0 para encerrar): ");
        scanf("%d", &num_carteira);

        if (num_carteira == 0) {
            break;
        }

        printf("Numero de multas: ");
        scanf("%d", &num_multas);

        valor_divida = 0.0;

        for (i = 1; i <= num_multas; i++) {
            printf("Valor da multa %d: ", i);
            scanf("%lf", &valor_multa);
            valor_divida += valor_multa;
        }

        total_recursos += valor_divida;

        printf("Valor da divida para o motorista %d: %.2lf\n", num_carteira, valor_divida);

        if (num_multas > maior_num_multas) {
            maior_num_multas = num_multas;
            motorista_maior_multas = num_carteira;
        }
    }

    printf("\nTotal de recursos arrecadados: %.2lf\n", total_recursos);
    printf("Motorista com o maior numero de multas: %d (Multas: %d)\n", motorista_maior_multas, maior_num_multas);
	
	return 0;
}
