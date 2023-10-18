#include <stdio.h>
#include <stdlib.h>

int main() {
    //int num_lojas = 3;
    //int num_funcionarios_por_loja = 6;

    //float salarios[num_lojas][num_funcionarios_por_loja];
    float sal[3][6], total_salarios_loja, media_salarial_segunda_loja;
    int funcionarios_acima_de_2000, c, l;

    for (l=0;l<3;l++) {
        for (c=0;c<6;c++) {
            printf("Digite o salario do funcionario %d da loja %d: ", c + 1, l + 1);
            scanf("%f", &sal[l][c]);
        }
    }
	
	printf("\n");
    for (l=0;l<3;l++) {
        for (c = 0; c < 6; c++) {
            printf("Salario do funcionario %d da loja %d: R$%.2f\n", c + 1, l + 1, sal[l][c]);
        }
    }
	
	printf("\n");
    for (l=0;l<3;l++) {
        total_salarios_loja = 0.0;
        for (c=0;c<6;c++) {
            total_salarios_loja += sal[l][c];
        }
        printf("Total pago em salarios na loja %d: R$%.2f\n", l + 1, total_salarios_loja);
    }
	
	printf("\n");
    funcionarios_acima_de_2000 = 0;
    for (c=0;c<6;c++) {
        if (sal[0][c] > 2000.0) {
            funcionarios_acima_de_2000++;
        }
    }
    printf("Na primeira loja, %d funcionário(s) recebe(m) salario superior a R$ 2.000,00\n", funcionarios_acima_de_2000);
	
	printf("\n");
    media_salarial_segunda_loja = 0.0;
    for (c=0;c<6;c++) {
        media_salarial_segunda_loja += sal[1][c];
    }
    media_salarial_segunda_loja /= 6;
    printf("A media salarial da segunda loja eh: R$%.2f\n", media_salarial_segunda_loja);

    return 0;
}

