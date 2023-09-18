#include <stdio.h>

int main(){
	
	double soma_informada, soma_calculada = 0.0, valor_recibo, diferenca;
    int num_recibos, i;

    printf("Digite o valor total do lote: ");
    scanf("%lf", &soma_informada);

    printf("Digite o numero de recibos: ");
    scanf("%d", &num_recibos);

    for (i = 1; i <= num_recibos; i++) {
        double valor_recibo;
        printf("Digite o valor do recibo %d: ", i);
        scanf("%lf", &valor_recibo);
        soma_calculada += valor_recibo;
    }

    printf("\n");
    if (soma_informada == soma_calculada) {
        printf("LOTE OK\n");
    } else {
        diferenca = soma_calculada - soma_informada;
        if (diferenca < 0) {
            printf("Diferenca negativa: %.2lf\n", diferenca);
        } else {
            printf("Diferenca positiva: %.2lf\n", diferenca);
        }
    }
	
	return 0;
}
